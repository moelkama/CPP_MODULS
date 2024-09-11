/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:34:30 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/09 18:29:26 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    std::string player1_name("akatfi");
    std::string player2_name("mkatfi");

    ClapTrap    player1(player1_name);
    ClapTrap    player2(player2_name);
    player1.attack(player2_name);
    player2.takeDamage(0);
}