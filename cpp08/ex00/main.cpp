#include "easyfind.hpp"

int main(void)
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(18);

    std::list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(6);
    l.push_back(4);
    l.push_back(18);

    try
    {
        std::cout << easyfind(v, 3) << std::endl;
        std::cout << easyfind(l, 6) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return (0);
}