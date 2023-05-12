#include "Zombie.hpp"

int main(void)
{
    Zombie *goatsss = zombieHorde(10, "leo messi");
    for (int i = 0; i < 10; i++)
        goatsss[i].announce();
    delete []goatsss;
}
