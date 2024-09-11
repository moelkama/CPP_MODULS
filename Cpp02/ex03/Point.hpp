/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:24:17 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/03 16:51:24 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point();
    Point(const float X, const float Y);
    Point(const Point& other);
    Point operator=(const Point& other);
    Fixed const get_x(void) const;
    Fixed const get_y(void) const;
    ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif