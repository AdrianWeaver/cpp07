/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:10:29 by aweaver           #+#    #+#             */
/*   Updated: 2023/01/16 19:07:04 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T* tab, unsigned int size, void (*funct)(const T&))
{
	for (unsigned int i = 0; i < size; i++)
	{
		(*funct)(tab[i]);
	}
}

template <typename T>
void	print(const T &element)
{
	std::cout << element << std::endl;
}

#endif
