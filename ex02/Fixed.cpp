/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:57:30 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/27 13:34:19 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fix_num = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::Fixed(int const i)
{
	fix_num = i << frac_bits;
}

Fixed::Fixed(float const f)
{
	fix_num = (int)roundf(f * (1 << frac_bits));
}

Fixed::~Fixed()
{
}

Fixed & Fixed::operator=(const Fixed &assign)
{
	if (this != &assign)
		this->fix_num = assign.fix_num;
	return *this;
}

int	Fixed::getRawBits(void) const
{
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
