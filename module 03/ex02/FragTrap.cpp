#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default") {
  this->hit_points = 100;
  this->energy_points = 100;
  this->attack_damage = 30;
  std::cout << "FragTrap " << this->name << " has been created! " << std::endl;
}

FragTrap::FragTrap(std::string __name) : ClapTrap(__name) {
  this->hit_points = 100;
  this->energy_points = 50;
  this->attack_damage = 20;
  std::cout << "FragTrap " << this->name << " has been created! " << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << this->name << " has been destroyed !"
            << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) {
  *this = obj;
  std::cout << "fragtrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj) {
  std::cout << "fragtrap Copy assignment operator called" << std::endl;
  this->name = obj.name;
  this->hit_points = obj.hit_points;
  this->energy_points = obj.energy_points;
  this->attack_damage = obj.attack_damage;
  return *this;
}

void FragTrap::highFivesGuys() {
  std::cout << "high five from Fragtrap" << std::endl;
}