#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::cout << "BitcoinExchange constructor called" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << "BitcoinExchange destructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    std::cout << "BitcoinExchange copy constructor called" << std::endl;
    *this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    std::cout << "BitcoinExchange assignation operator called" << std::endl;
    if (this != &other)
    {
        this->database = other.database;
    }
    return *this;
}

void BitcoinExchange::ReadDatabase()
{
    std::ifstream myfile;
    std::string line;
    myfile.open("./data.csv");
    if (!myfile.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return;
    }
    myfile >> line;
    while (!myfile.eof())
    {
        myfile >> line;
        std::string date = line.substr(0, line.find(','));
        std::string price = line.substr(line.find(',') + 1, line.length());
        this->database.insert(std::make_pair(date.substr(0,10).erase(4,1).erase(6,1), std::stof(price)));
    }
    myfile.close();
}

void BitcoinExchange::PrintDatabase()
{
    for (std::map<std::string, float>::iterator it = this->database.begin(); it != this->database.end(); it++)
    {
        std::cout << it->first << " " << it->second << std::endl;
    }
}


bool isNumber(std::string str)
{
    for (std::string::iterator it = str.begin(); it != str.end(); it++)
    {
        if (!isdigit(*it) && *it != '.')
            return false;
    }
    return true;
}
void    BitcoinExchange::ReadInput(std::string filename)
{
    std::ifstream myfile;
    std::string line;
    myfile.open(filename);
    if (!myfile.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return;
    }
    std::getline(myfile, line);
    if (line != "date | value")
    {
        std::cerr << "Invalid input" << std::endl;
        return ;
    }
    while (!myfile.eof())
    {
        std::getline(myfile, line);
        if (line.length() < 14 || splitString(line) != 2)
        {
            std::cerr << "Invalid input" << std::endl;
            continue ;
        }
        std::string year = line.substr(0, 4);
        std::string month = line.substr(5, 2);
        std::string day = line.substr(8, 2);
        std::string price = line.substr(12, line.length());
        price.erase(remove(price.begin(), price.end(), ' '), price.end());

        if (!isNumber(year) || !isNumber(month) || !isNumber(day) || !isNumber(price))
        {
            std::cerr << "Invalid input" << std::endl;
            continue ;
        }
        int day_int = std::atoi(day.c_str());
        int month_int = std::atoi(month.c_str());
        int year_int = std::atoi(year.c_str());
        float price_float = std::atof(price.c_str());
        if (ParseInput(year_int, month_int, day_int, price_float, line) == -1)
            continue ;
        else
        {
            std::string fulldate;
            if (month_int < 10 && day_int < 10)
                fulldate = std::to_string(year_int * 10) + std::to_string(month_int * 10) + std::to_string(day_int);
            else if (month_int < 10)
                fulldate = std::to_string(year_int * 10) + std::to_string(month_int) + std::to_string(day_int);
            else if (day_int < 10)
                fulldate = std::to_string(year_int) + std::to_string(month_int * 10) + std::to_string(day_int);
            else
                fulldate = std::to_string(year_int) + std::to_string(month_int) + std::to_string(day_int);
            PrintOutput(fulldate, price_float);
        }

    }
    myfile.close();
}

int BitcoinExchange::ParseInput(int year, int month, int day, float value, std::string line)
{
    if (line.substr(4,1) != "-" || line.substr(7,1) != "-")
    {
        std::cerr << "Invalid Date form" << std::endl;
        return (-1);
    }
    size_t pos = line.find('|');
    if (line[pos -1] != ' ' || line[pos + 1] != ' ')
    {
        std::cerr << "Invalid pipe" << std::endl;
        return -1;
    }
    int month_limits[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year < 2009 || month < 1 || month > 12)
    {
        std::cerr << "Invalid Date Format\n";
        return (-1);
    }
    if (day > month_limits[month - 1] || day < 1)
    {
        std::cerr << "Out of month range\n";
        return (-1);
    }
    if (value < 0.00 || value > 1000.00 )
    {
        std::cerr << "Rate out of range\n";
        return (-1);
    }
    return (0);
}

void BitcoinExchange::PrintOutput(std::string date, float value)
{
    if (date < this->database.begin()->first)
    {
        std::cout << "invalid input" << std::endl;
        return ;
    }
    std::map<std::string, float>::iterator val = this->database.upper_bound(date);
    val--;
    std::cout << date.insert(4,"-").insert(7,"-") << " => " << value << " " << " = " << value * val->second  << std::endl;
}


int    BitcoinExchange::splitString(std::string line){
    std::string delimiter = " ";
    size_t pos = 0;
    int i = 0;
    while ((pos = line.find(delimiter)) != std::string::npos) {
        i++;
        line.erase(0, pos + delimiter.length());
    }
    return i;
}
