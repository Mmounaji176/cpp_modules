# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string __name): name(__name),  hit_points(10), energy_points(10), attack_damage(0){
    std::cout << "Claptrap " << this->name << " has been created! " <<std::endl;
}

ClapTrap::ClapTrap(): name("default"), hit_points(10), energy_points(10), attack_damage(0){
	std::cout << "default constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &claptrap) {
    *this = claptrap;
    std::cout << "copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "claptrap " << this->name << " has been destroyed !" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap) {
    std::cout << "Copy assignment operator called" << std::endl;
	this->name = claptrap.name;
	this->hit_points = claptrap.hit_points;
	this->energy_points = claptrap.energy_points;
	this->attack_damage = claptrap.attack_damage;
    return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy_points <= 0 || this->hit_points <= 0)
	{
		std::cout << "claptraap " << this->name << " has no energy points" << std::endl;
	}
	else
	{
		this->energy_points--;
		std::cout << "claptrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energy_points <= 0 || this->hit_points <= 0)
	{
		std::cout << "claptrap " << this->name <<  " is already dead !" << std::endl;
	}
	else
	{
		this->hit_points -= amount;
		std::cout << "claptrap " << this->name << "toke a damage , causing " << this->hit_points << " of hit ponits" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points <= 0 || this->hit_points <= 0)
	{
		std::cout << "claptraap " << this->name << " has no energy points" << std::endl;
	}
	else
	{
		std::cout << "claptraap " << this->name << " repairs itself, it gets  " << amount << " of hit points"<< std::endl;
		this->energy_points--;
		this->hit_points += amount;
	}
}
