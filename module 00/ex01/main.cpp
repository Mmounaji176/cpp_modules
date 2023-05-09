/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:43:42 by mmounaji          #+#    #+#             */
/*   Updated: 2023/05/09 17:45:30 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
	PhoneBook	messi;
    std::string line = "";
	std::cout << "Welcome to Your PhoneBook" << std::endl;
    std::cout << std::endl;
    std::cout << "ADD\t: To add a contact." << std::endl;
    std::cout << "SEARCH\t: To search for a contact." << std::endl;
    std::cout << "EXIT\t: to quite the PhoneBook." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << std::endl;
    while (line.compare("EXIT")) {
        if (line.compare("ADD") == 0)
            messi.ADD();
        else if (line.compare("SEARCH") == 0) {
            messi.printContacts();
            messi.SEARCH();
        }
        std::cout << "> " << std::flush;
        std::cin >> line;
    }
    return 0;
}