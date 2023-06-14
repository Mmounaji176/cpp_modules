# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) :ScavTrap( name ), FragTrap( name )
{
    this->_name = name;
    ClapTrap::name = name + "_clap_name";
    FragTrap::hit_points = 100;
    ScavTrap::energy_points = 50;
    FragTrap::attack_damage = 30;
    
    std::cout << "DiamondTrap " << this->_name << " constructed." << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->_name << " is dead." << std::endl;
}

void    DiamondTrap::whoAmI( void ) {
    std::cout << "I am a DiamondTrap named " << this->_name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}