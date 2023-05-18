#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
#include <iostream>

class ClapTrap{
    private:
        std::string name;
        int hit_points;
		int	energy_points;
		int attack_damage;
	public:
		ClapTrap(std::string __name);
		ClapTrap();
        ~ClapTrap();
        ClapTrap(const ClapTrap &claptrap);
        ClapTrap& operator=(const ClapTrap &claptrap);
		void attack(const std::string& target);
 		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};
#endif