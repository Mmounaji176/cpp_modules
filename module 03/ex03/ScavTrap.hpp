#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
	public:
		ScavTrap(std::string __name);
		ScavTrap();
        ~ScavTrap();
        ScavTrap(const ScavTrap &obj);
        ScavTrap& operator=(const ScavTrap &obj);
		void	attack(const std::string& target);
		void	guardGate();
};
#endif