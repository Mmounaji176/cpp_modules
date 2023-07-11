/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 03:41:27 by ael-khni          #+#    #+#             */
/*   Updated: 2022/08/12 03:51:53by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main( void )
{
    int tab1[] = { 1, 2, 3, 4, 5 };

    std::cout << "tab1: " << std::endl;
    iter(tab1, 5, print);

    double tab2[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

    std::cout << "tab2: " << std::endl;
    iter(tab2, 5, print);

    char tab3[] = { 'a', 'b', 'c', 'd', 'e' };

    std::cout << "tab3: " << std::endl;
    iter(tab3, 5, print);

    std::string tab4[] = { "one", "two", "three", "four", "five" };

    std::cout << "tab4: " << std::endl;
    iter(tab4, 5, print);
}

