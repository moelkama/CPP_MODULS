/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:34:55 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/09 18:45:00 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    std::string player1_name("monabid");
    std::string player2_name("moelkama");

    ScavTrap    player1(player1_name);
    ScavTrap    player2(player2_name);
    player1.guardGate();
    player1.attack(player2_name);
    player2.takeDamage(20);
}