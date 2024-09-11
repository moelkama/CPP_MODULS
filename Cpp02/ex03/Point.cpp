/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:24:13 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/03 16:51:10 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0){}

Point::Point(const float X, const float Y):x(X), y(Y){}

Point::Point(const Point& other):x(other.x), y(other.y){}

Point Point::operator=(const Point& other)
{
    return (other);
}

const Fixed Point::get_x(void) const
{
    return x;
}

const Fixed Point::get_y(void) const
{
    return y;
}

Point::~Point()
{
    // std::cout<<"Point is destroyed"<<std::endl;
}