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
