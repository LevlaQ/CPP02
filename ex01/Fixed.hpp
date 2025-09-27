/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:26:33 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/27 14:08:08 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(int const i);
		Fixed(float const f);
		
		~Fixed();
		
		Fixed & operator=(const Fixed &assign);

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