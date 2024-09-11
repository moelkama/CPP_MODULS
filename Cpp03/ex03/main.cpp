/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:36:01 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/09 17:55:33 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    std::string monster1_name("elkamal");
    std::string monster2_name("mohammed");

    DiamondTrap monster1(monster1_name);
    DiamondTrap monster2(monster2_name);

    monster1.attack(monster2_name);
    // ClapTrap *ptr = &monster1;
    // ptr->attack(monster2_name);
    // monster2.takeDamage(30);
    // monster2.takeDamage(30);
    // monster1.attack(monster2_name);
    // monster2.takeDamage(30);
    // std::cout<<std::endl;

    // monster2.attack(monster1_name);
    // monster1.takeDamage(30);
    // std::cout<<std::endl;

    // monster1.attack(monster2_name);
    // monster2.takeDamage(30);
    // std::cout<<std::endl;
    // monster2.attack(monster2_name);
}