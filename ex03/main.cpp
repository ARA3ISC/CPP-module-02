/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:26:20 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/19 16:49:03 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	Point a(0, 6);
	Point b(3.8, -5);
	Point c(-5, 0);
	Point point(-4.9, 0);

	if (bsp(a, b, c, point))
		std::cout << "dakhel" << std::endl;
	else
		std::cout << "kharej" << std::endl;

	return 0;
}
