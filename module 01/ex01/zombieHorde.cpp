/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:57:55 by mmounaji          #+#    #+#             */
/*   Updated: 2023/05/12 14:04:16 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    if (N <= 0)
        return NULL;
    Zombie *zoombiess = new Zombie[N];
    if (zoombiess == NULL)
        return NULL:
    for (int index = 0; index < N ; index++)
        zoombiess[index].setter(name);
    return zoombiess;
}
