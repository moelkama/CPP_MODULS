/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:21:51 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/03 16:07:49 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::number_fractional_bits = 8;

Fixed::Fixed()
{
    std::cout<<"Default constructor called"<<std::endl;
    fixed_point_number = 0;
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
    this->fixed_point_number = obj.getRawBits();
    return (*this);
}

void    Fixed::setRawBits(int const Raw)
{
    std::cout<<"setRawBits member function called"<<std::endl;
    this->fixed_point_number = Raw;
}

int Fixed::getRawBits(void) const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return (this->fixed_point_number);
}
