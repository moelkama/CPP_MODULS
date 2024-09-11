/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:23:30 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/03 16:13:48 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
    // std::cout<<"Default constructor called"<<std::endl;
    fixed_point_number = 0;
}

Fixed::Fixed(const int a)
{
    // std::cout<<"Int constructor called"<<std::endl;
    fixed_point_number = a << fractional_bits;
}

Fixed::Fixed(const float a)
{
    // std::cout<<"Float constructor called"<<std::endl;
    fixed_point_number = a * 256;
}

Fixed::Fixed(const Fixed& obj)
{
    // std::cout<<"Copy constructor called"<<std::endl;
    *this = obj;
}

Fixed::~Fixed()
{
    // std::cout<<"Destructor called"<<std::endl;
}

void    Fixed::setRawBits(int const Raw)
{
    // std::cout<<"setRawBits member function called"<<std::endl;
    fixed_point_number = Raw;
}

int Fixed::getRawBits(void) const
{
    // std::cout<<"getRawBits member function called"<<std::endl;
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

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    // std::cout<<"Copy assignment operator called"<<std::endl;
    this->fixed_point_number = obj.fixed_point_number;
    return (*this);
}

bool    Fixed::operator== (const Fixed &obj) const
{
    return (this->fixed_point_number == obj.fixed_point_number);
}

bool    Fixed::operator!= (const Fixed &obj) const
{
    return (this->fixed_point_number != obj.fixed_point_number);
}

bool    Fixed::operator< (const Fixed &obj) const
{
    return (this->fixed_point_number < obj.fixed_point_number);
}

bool    Fixed::operator> (const Fixed &obj) const
{
    return (this->fixed_point_number > obj.fixed_point_number);
}

bool    Fixed::operator<= (const Fixed &obj) const
{
    return (this->fixed_point_number <= obj.fixed_point_number);
}

bool    Fixed::operator>= (const Fixed &obj) const
{
    return (this->fixed_point_number >= obj.fixed_point_number);
}

Fixed    Fixed::operator+(const Fixed &obj) const
{
    Fixed   result;

    result.fixed_point_number = this->fixed_point_number + obj.fixed_point_number;
    return (result);
}

Fixed     Fixed::operator-(const Fixed &obj) const
{
    Fixed   sum;

    sum.fixed_point_number = this->fixed_point_number - obj.fixed_point_number;
    return (sum);
}

Fixed    Fixed::operator*(const Fixed &obj) const
{
    Fixed   result;

    result.fixed_point_number = (float)this->fixed_point_number / 256 * obj.fixed_point_number;
    return (result);
}

Fixed    Fixed::operator/(const Fixed &obj) const
{
    Fixed   result;

    result.fixed_point_number = (float)this->fixed_point_number / obj.fixed_point_number * 256;
    return (result);
}

Fixed  Fixed::operator++(void)
{
    fixed_point_number++;
    return (*this);
}

Fixed  Fixed::operator++(int)
{
    Fixed   temp;

    temp = *this;
    fixed_point_number++;
    return (temp);
}

Fixed  Fixed::operator--(void)
{
    fixed_point_number--;
    return (*this);
}

Fixed  Fixed::operator--(int)
{
    Fixed   temp;

    temp = *this;
    fixed_point_number--;
    return (temp);
}

Fixed&         Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed&   Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed&         Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed&   Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}