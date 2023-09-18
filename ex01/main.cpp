/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:37:27 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/18 20:13:21 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main() {

	Fixed		a;
	Fixed const	b(10);
	Fixed const c(42.42f);
	Fixed const	d(b);


	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as an integer "<< std::endl;
	std::cout << "b is " << b.toInt() << " as an integer "<< std::endl;
	std::cout << "c is " << c.toInt() << " as an integer "<< std::endl;
	std::cout << "d is " << d.toInt() << " as an integer "<< std::endl;
	return 0;
}
