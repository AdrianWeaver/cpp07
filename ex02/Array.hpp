/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:47:47 by aweaver           #+#    #+#             */
/*   Updated: 2023/01/16 18:13:58 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
	public:
		Array()
		{
			this->capacity = 0;
		};
		~Array()
		{
			if (this->capacity > 0)
				delete[] this->drawer;
		};
		Array(unsigned int n)
		{
			drawer = new T[n];
			this->capacity = n;
		};

		Array(Array const& source)
		{
			this->capacity = 0;
			*this = source;
		};
		Array& operator=(Array const& rhs)
		{
			if (this->capacity > 0)
				delete[] this->drawer;
			this->drawer = new T[rhs.size()];
			this->capacity = rhs.capacity;
			for (unsigned int i = 0; i < rhs.size(); i++)
			{
				this->drawer[i] = rhs.drawer[i];
			}
			return (*this);
		};
		T& operator[](unsigned int index) const
		{
			if (index >= capacity)
				throw (std::exception());
			return (drawer[index]);
		};
		unsigned int size() const { return (capacity); };
	private:
		T* drawer;
		unsigned int capacity;


};

#endif
