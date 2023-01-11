/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:43:57 by aweaver           #+#    #+#             */
/*   Updated: 2023/01/11 15:07:31 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main(void)
{
	{
		char a = 'a';
		char b = 'b';

		std::cout << "a before swap: " << a << std::endl << "b before swap: " << b << std::endl;
		swap(a, b);
		std::cout << "a after swap: " << a << std::endl << "b after swap: " << b << std::endl;
	}
	{
		int a = 'a';
		int b = 'b';

		std::cout << "a before swap: " << a << std::endl << "b before swap: " << b << std::endl;
		swap(a, b);
		std::cout << "a after swap: " << a << std::endl << "b after swap: " << b << std::endl;
	}
	{
		std::string a = "wesh";
		std::string b = "alors";

		std::cout << "a before swap: " << a << std::endl << "b before swap: " << b << std::endl;
		swap(a, b);
		std::cout << "a after swap: " << a << std::endl << "b after swap: " << b << std::endl;
	}

	std::cout << "the min is: " << min(8, 10) << std::endl;
	std::cout << "the other way round min still is: " << min(10, 8) << std::endl;
	std::cout << "the max is: " << max(8, 10) << std::endl;
	std::cout << "the min is: " << min('Z', 'a') << std::endl;
	std::cout << "the max is: " << max('a', 'Z') << std::endl;
	std::cout << "the max is: " << max("wesh", "alors") << std::endl;
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return (0);
}
