/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:57:30 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/22 13:15:41 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fix_num = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	fix_num = i << frac_bits;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	fix_num = (int)roundf(f * (1 << frac_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &assign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &assign)
		this->fix_num = assign.fix_num;
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
	return ((float)fix_num / (1 << frac_bits));
}

int	Fixed::toInt( void ) const
{
	return (fix_num >> frac_bits);
}

std::ostream & operator<<(std::ostream &stream, Fixed const &ins)
{
	stream << ins.toFloat();
	return (stream);
}
