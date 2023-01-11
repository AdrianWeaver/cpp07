/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:48:29 by aweaver           #+#    #+#             */
/*   Updated: 2023/01/11 14:52:42 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& first, T& second)
{
	T save;
	save = first;
	first = second;
	second = save;
}

template <typename T>
T min(T first, T second)
{
	if (first < second)
		return (first);
	return (second);
}

template <typename T>
T max(T first, T second)
{
	if (first > second)
		return (first);
	return (second);
}

#endif
