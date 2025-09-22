/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_overloads.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:15:08 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/22 18:59:37 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool    Fixed::operator<(const Fixed &ins) const
{
    if (this->fix_num < ins.fix_num)
        return (true);
    else
        return (false);
}

bool    Fixed::operator>(const Fixed &ins) const
{
    if (this->fix_num > ins.fix_num)
        return (true);
    else
        return (false);
}

bool    Fixed::operator>=(const Fixed &ins) const
{
    if (this->fix_num >= ins.fix_num)
        return (true);
    else
        return (false);
}

bool    Fixed::operator<=(const Fixed &ins) const
{
    if (this->fix_num <= ins.fix_num)
        return (true);
    else
        return (false);
}

bool    Fixed::operator==(const Fixed &ins) const
{
    if (this->fix_num == ins.fix_num)
        return (true);
    else
        return (false);
}

bool    Fixed::operator!=(const Fixed &ins) const
{
    if (this->fix_num != ins.fix_num)
        return (true);
    else
        return (false);
}

/*
    int çarpımından taşma olmasın diye geçici bir long long
*/
Fixed Fixed::operator*(const Fixed &ins) const
{
    long long   tmp;
    Fixed       out;
    tmp = (static_cast<long long>(this->fix_num) * static_cast<long long>(ins.fix_num));
    out.fix_num = static_cast<int>(tmp >> frac_bits);
    return (out);
}

/*
    ins.fix_num'ı long long'a castlemiyorum, çünkü bu işi zaten derleyici yapıyor
*/
Fixed Fixed::operator/(const Fixed &ins) const
{
    long long   tmp;
    Fixed       out;
    tmp = static_cast<long long>(this->fix_num) << frac_bits;
    out.fix_num = static_cast<int>(tmp / ins.fix_num);
    return (out);
}

Fixed Fixed::operator+(const Fixed &ins) const
{
    Fixed   out;
    out.fix_num = this->fix_num + ins.fix_num;
    return (out);
}

Fixed Fixed::operator-(const Fixed &ins) const
{
    Fixed   out;
    out.fix_num = this->fix_num - ins.fix_num;
    return (out);
}