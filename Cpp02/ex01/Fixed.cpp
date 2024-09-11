/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:23:01 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/03 16:11:00 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
    std::cout<<"Default constructor called"<<std::endl;
    fixed_point_number = 0;
}

Fixed::Fixed(const int a)
{
    std::cout<<"Int constructor called"<<std::endl;
    fixed_point_number = a << fractional_bits;
}

Fixed::Fixed(const float a)
{
    std::cout<<"Float constructor called"<<std::endl;
    fixed_point_number = a * 256;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = obj;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    this->fixed_point_number = obj.fixed_point_number;
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& dt)
{
    os << dt.toFloat();
    return os;
}

void    Fixed::setRawBits(int const Raw)
{
    std::cout<<"setRawBits member function called"<<std::endl;
    fixed_point_number = Raw;
}

int Fixed::getRawBits(void) const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return (fixed_point_number);
}

float   Fixed::toFloat(void) const
{
    return ((float)fixed_point_number / 256);
}

int     Fixed::toInt(void) const
{
    return (fixed_point_number / 256);
}