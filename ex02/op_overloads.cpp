/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_overloads.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:15:08 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/27 13:54:40 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool	Fixed::operator<(const Fixed &ins) const
{
	if (this->fix_num < ins.fix_num)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>(const Fixed &ins) const
{
	if (this->fix_num > ins.fix_num)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(const Fixed &ins) const
{
	if (this->fix_num >= ins.fix_num)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(const Fixed &ins) const
{
	if (this->fix_num <= ins.fix_num)
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(const Fixed &ins) const
{
	if (this->fix_num == ins.fix_num)
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(const Fixed &ins) const
{
	if (this->fix_num != ins.fix_num)
		return (true);
	else
		return (false);
}

Fixed Fixed::operator*(const Fixed &ins) const
{
	long long	tmp;
	Fixed		out;
	tmp = (static_cast<long long>(this->fix_num) * static_cast<long long>(ins.fix_num));
	out.fix_num = static_cast<int>(tmp >> frac_bits);
	return (out);
}

Fixed Fixed::operator/(const Fixed &ins) const
{
	long long	tmp;
	Fixed		out;
	tmp = static_cast<long long>(this->fix_num) << frac_bits;
	out.fix_num = static_cast<int>(tmp / ins.fix_num);
	return (out);
}

Fixed Fixed::operator+(const Fixed &ins) const
{
	Fixed	out;
	out.fix_num = this->fix_num + ins.fix_num;
	return (out);
}

Fixed Fixed::operator-(const Fixed &ins) const
{
	Fixed	out;
	out.fix_num = this->fix_num - ins.fix_num;
	return (out);
}

Fixed Fixed::operator++()
{
	Fixed	out;
	out.fix_num = this->fix_num + 1;
	this->fix_num = this->fix_num + 1;
	return (out);
}

Fixed Fixed::operator++(int)
{
	Fixed	out;
	
	out.fix_num = this->fix_num;
	this->fix_num = this->fix_num + 1;
	return (out);
}

Fixed Fixed::operator--()
{
	Fixed	out;
	out.fix_num = this->fix_num - 1;
	this->fix_num = this->fix_num - 1;
	return (out);
}

Fixed Fixed::operator--(int)
{
	Fixed	out;

	out.fix_num = this->fix_num;
	this->fix_num = this->fix_num - 1;
	return (out);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	if (a.fix_num <= b.fix_num)
		return (a);
	else
		return (b);
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.fix_num <= b.fix_num)
		return (a);
	else
		return (b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	if (a.fix_num >= b.fix_num)
		return (a);
	else
		return (b);
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.fix_num >= b.fix_num)
		return (a);
	else
		return (b);
}
