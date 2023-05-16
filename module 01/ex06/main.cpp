#include "Harl.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "bad number of arguments" << std::endl;
        return 1;
    }
    Harl obj;
    std::string arg = av[1];
    obj.complain(arg);

}