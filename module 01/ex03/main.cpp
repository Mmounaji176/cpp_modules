
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    {
        Weapon  club = Weapon(NULL);
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon  club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("j");
        jim.attack();
    }

}
