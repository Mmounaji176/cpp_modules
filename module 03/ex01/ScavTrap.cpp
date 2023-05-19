#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("default")
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "scavtrap " << this->name << " has been created! " <<std::endl;
}

ScavTrap::ScavTrap(std::string __name): ClapTrap(__name)
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "scavtrap " << this->name << " has been created! " <<std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "scavtrap " << this->name << " has been destroyed !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	*this = obj;
	std::cout << "copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj) {
    std::cout << "Copy assignment operator called" << std::endl;
	this->name = obj.name;
	this->hit_points = obj.hit_points;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
    return *this;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap" << this->name << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energy_points <= 0 || this->hit_points <= 0)
	{
		std::cout << "scavtrap " << this->name << " has no energy points" << std::endl;
	}
	else
	{
		this->energy_points--;
		std::cout << "scavtrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage" << std::endl;
	}
}