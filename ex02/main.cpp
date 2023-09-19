/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:26:20 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/19 11:04:13 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a(2.5f);
	Fixed c(2.6f);
	// Fixed  b(Fixed( 5.05f ) * Fixed( 2 ));

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;


	// std::cout << b << std::endl;
	if (a >= c)
		std::cout << "a kber mn b" << std::endl;

	return 0;
}
