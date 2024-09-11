/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:35:18 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/09 18:52:17 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    std::string player1_name("elkamel");
    std::string player2_name("mohammed");

    FragTrap    player1(player1_name);
    FragTrap    player2(player2_name);
    player1.attack(player2_name);
    player2.takeDamage(30);
    player2.attack(player1_name);
}