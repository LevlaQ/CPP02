/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:57:54 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/27 14:08:53 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP
#  include <iostream>
#  include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(int const i);
		Fixed(float const f);
		
		~Fixed();
		
		Fixed & operator=(const Fixed &assign);

		bool	operator<(const Fixed &ins) const;
		bool	operator>(const Fixed &ins) const;
		bool	operator>=(const Fixed &ins) const;
		bool	operator<=(const Fixed &ins) const;
		bool	operator==(const Fixed &ins) const;
		bool	operator!=(const Fixed &ins) const;

		Fixed operator*(const Fixed &ins) const;
		Fixed operator/(const Fixed &ins) const;
		Fixed operator+(const Fixed &ins) const;
		Fixed operator-(const Fixed &ins) const;
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		static Fixed & min(Fixed &a, Fixed &b);
		static const Fixed & min(const Fixed &a, const Fixed &b);
		static Fixed & max(Fixed &a, Fixed &b);
		static const Fixed & max(const Fixed &a, const Fixed &b);

		int		getRawBits(void) const;
		void	setRawBits (int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const; 
	private:
		int					fix_num;
		static const int	frac_bits = 8;
};

std::ostream & operator<<(std::ostream &stream, Fixed const &ins);

#endif