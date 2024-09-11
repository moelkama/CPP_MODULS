/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:21:23 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/03 15:21:25 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool same_side( Point const p1, Point const p2, Point const o, Point const point)
{
    Fixed   a;
    Fixed   b;

    a = (p1.get_y() - p2.get_y()) / (p1.get_x() - p2.get_x());
    b = p1.get_y() - a * p1.get_x();
    if (a * o.get_x() + b < o.get_y() && a * point.get_x() + b < point.get_y())
        return (true);
    if (a * o.get_x() + b > o.get_y() && a * point.get_x() + b > point.get_y())
        return (true);
    return (false);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    if (!same_side(a, b, c, point))
        return (false);
    if (!same_side(a, c, b, point))
        return (false);
    if (!same_side(b, c, a, point))
        return (false);
    return (true);
}