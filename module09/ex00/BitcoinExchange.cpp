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
        this->database.insert(std::make_pair(date, std::stod(price)));
    }
    myfile.close();
}

void BitcoinExchange::PrintDatabase()
{
    for (std::map<std::string, double>::iterator it = this->database.begin(); it != this->database.end(); it++)
    {
        std::cout << it->first << " => " << it->second << std::endl;
    }
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
    while (!myfile.eof())
    {
        std::getline(myfile, line);
        if (line.length() < 14)
        {
            std::cerr << "Invalid input" << std::endl;
            continue ;
        }
        std::string year = line.substr(0, 4);
        std::string month = line.substr(5, 2);
        std::string day = line.substr(8, 2);
        std::string price = line.substr(12, line.length());
        price.erase(remove(price.begin(), price.end(), ' '), price.end());
        std::cout << std::atoi(year.c_str()) << "*" << std::atoi(month.c_str()) << "*" << std::atoi(day.c_str()) << " => " << std::atoi(price.c_str()) << std::endl;
    }
    myfile.close();
}
