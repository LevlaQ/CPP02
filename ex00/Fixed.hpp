/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:56:55 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/27 14:08:28 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		
		~Fixed();
		
		Fixed & operator=(const Fixed &assign);

		int		getRawBits(void) const;
		void	setRawBits (int const raw);
		
	private:
		int					fix_num;
		static const int	frac_bits = 8;
};

#endif