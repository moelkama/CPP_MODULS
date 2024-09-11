/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:24:07 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/03 15:32:56 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
    Point   a(1, 1);
    Point   b(3, 5);
    Point   c(6, 3);
    Point   point(3, 3);

    std::cout<<bsp(a, b, c, point)<<std::endl;

    return (0);
}
