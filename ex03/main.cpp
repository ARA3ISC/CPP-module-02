/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:26:20 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/19 16:11:48 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	Point a(3, 7);
	Point b(-5, 0);
	Point c(3, -5);
	Point point(-5, 0);

	if (bsp(a, b, c, point))
		std::cout << "dakhel" << std::endl;
	else
		std::cout << "kharej" << std::endl;

	return 0;
}
