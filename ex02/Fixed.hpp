/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:57:54 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/22 18:57:35 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy); //Toplama çıkarma işlemlerinde bu constructor kullanılacak
		Fixed(int const i);
		Fixed(float const f);
		
		~Fixed();
		
		Fixed & operator=(const Fixed &assign);

        /*
			Boolian sayı büyük mü küçük mü onu söyler, fixed_num değişmiyor
			Bende: a < b, Derleyicide: a.operator<(b)
		*/
        bool    operator<(const Fixed &ins) const;
        bool    operator>(const Fixed &ins) const;
        bool    operator>=(const Fixed &ins) const;
        bool    operator<=(const Fixed &ins) const;
        bool    operator==(const Fixed &ins) const;
        bool    operator!=(const Fixed &ins) const;

		/*
			Çarpma/bölme işlemleri class üzerinden olacak şekilde gerçekleşiyor
			Bende = a * b, Derleyicide: a.operator*(b)
		*/
        Fixed operator*(const Fixed &ins) const;
        Fixed operator/(const Fixed &ins) const;
        Fixed operator+(const Fixed &ins) const;
        Fixed operator-(const Fixed &ins) const;

		int		getRawBits(void) const;
		void	setRawBits (int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const; 
	private:
		int					fix_num;
		static const int	frac_bits = 8;
};

std::ostream & operator<<(std::ostream &stream, Fixed const &ins);