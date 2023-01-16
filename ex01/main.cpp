/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:12:24 by aweaver           #+#    #+#             */
/*   Updated: 2023/01/16 19:07:05 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	{
		std::string *tab = new std::string[4];
		tab[0] = "il est 10h07 et jcourtoi est totalement bourrée";
		tab[1] = "il est toujours 10h07 et bsavinel me pète déjà les oreilles";
		tab[2] = "il est 10h08 et on a failli poireauter 2h devant block'out à cause de nboratko";
		tab[3] = "il est 10h09 et si j'écoutais les conseils de merde de Blue j'aurais des doigts de pieds de chinoise des années 1800";
		iter(tab, 4, print);
		delete[] tab;
	}
	{
		int *tab = new int[5];
		tab[0] = 1;
		tab[1] = 2;
		tab[2] = 3;
		tab[3] = 4;
		tab[4] = 5;
		iter(tab, 5, print);
		delete[] tab;
	}
	{
		const int tab[] = {1, 2, 3};
		iter(tab, 3, print);
	}
	{
		int wesh[] = { 12, 12, 42, 12};
		iter(wesh, 4, print);
	}
	return (0);
}
