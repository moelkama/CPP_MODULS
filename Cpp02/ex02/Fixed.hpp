/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:23:44 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/03 16:12:38 by moelkama         ###   ########.fr       */
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
    Fixed&                  operator=(const Fixed &obj);
    bool                    operator== (const Fixed &obj) const;
    bool                    operator!= (const Fixed &obj) const;
    bool                    operator< (const Fixed &obj) const;
    bool                    operator<=(const Fixed &obj) const;
    bool                    operator> (const Fixed &obj) const;
    bool                    operator>= (const Fixed &obj) const;
    Fixed                   operator+(const Fixed &obj) const;
    Fixed                   operator-(const Fixed &obj) const;
    Fixed                   operator*(const Fixed &obj) const;
    Fixed                   operator/(const Fixed &obj) const;
    Fixed                   operator++(void);
    Fixed                   operator++(int);
    Fixed                   operator--(void);
    Fixed                   operator--(int);
    void                    setRawBits(int const Raw);
    int                     getRawBits(void) const;
    float                   toFloat(void) const;
    int                     toInt(void) const;
    static Fixed&           min(Fixed &a, Fixed &b);
    static const Fixed&     min(const Fixed &a, const Fixed &b);
    static Fixed&           max(Fixed &a, Fixed &b);
    static const Fixed&     max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif