/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:26:33 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/16 20:05:26 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <string>

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