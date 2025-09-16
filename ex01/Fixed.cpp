/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:26:00 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/16 19:59:29 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fix_num = 0;
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(int const i)
{
	
}

Fixed::Fixed(float const f)
{
	
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &assign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &assign)
		this->fix_num = assign.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fix_num);
}

void	Fixed::setRawBits (int const raw)
{
	this->fix_num = raw;
}

float	Fixed::toFloat( void ) const
{
	
}

int	Fixed::toInt( void ) const
{
	
}