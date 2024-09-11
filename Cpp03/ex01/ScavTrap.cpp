/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:34:47 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/09 18:33:04 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<<"ScavTrap Default constractor called"<<std::endl;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout<<"ScavTrap parameter constractor called"<<std::endl;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
    std::cout<<"ScavTrap Copy Constractor called"<<std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout<<"ScavTrap copy assignment operator called"<<std::endl;
    this->ClapTrap::operator=(other);
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap "<<this->name<<" Destractor called"<<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->Energy_points > 0 && this->Hit_points > 0)
    {
        std::cout<<"ScavTrap "<<this->name<<" attacks "<<target<<", causig "<<this->Attack_damage<<" points of damage!"<<std::endl;
        this->Energy_points--;
    }
    else
        std::cout<<"ClapTrap "<<this->name<<" Can not attack "<<target<<std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout<<"ScavTrap "<<this->name<<" is now in Gate keeper mode"<<std::endl;
}