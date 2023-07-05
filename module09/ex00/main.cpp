#include "BitcoinExchange.hpp"

int main()
{
    BitcoinExchange exchange;
    exchange.ReadDatabase();
    exchange.PrintDatabase();
    return 0;
}