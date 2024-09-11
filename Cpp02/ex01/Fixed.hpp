/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:23:06 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/03 16:10:11 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 fixed_point_number;
    static const int    fractional_bits;
public:
    Fixed();
    Fixed(const int a);
    Fixed(const float a);
    Fixed(const Fixed& obj);
    ~Fixed();
    Fixed&    operator=(const Fixed &obj);
    void    setRawBits(int const Raw);
    int     getRawBits(void) const;
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& dt);

#endif