/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:22:35 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/03 16:07:25 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 fixed_point_number;
    static const int    number_fractional_bits;
public:
    Fixed();
    Fixed(const Fixed& obj);
    ~Fixed();
    Fixed&    operator=(const Fixed &obj);
    void            setRawBits(int const Raw);
    int             getRawBits(void) const;
};

#endif