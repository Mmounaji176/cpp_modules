/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:13:31 by mmounaji          #+#    #+#             */
/*   Updated: 2023/05/11 20:58:48 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor called \n" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor called \n" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
void    Zombie::setter(std::string _name) {
    this->name = _name;
}
