/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:10:31 by mmounaji          #+#    #+#             */
/*   Updated: 2023/05/11 20:48:34 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string _name);
		~Zombie();
		void announce( void );
};

Zombie*	newZombie( std::string _name );
void	randomChump( std::string _name );
#endif