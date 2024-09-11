/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:35:21 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/09 18:54:24 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout<<"ScavTrap Defualt constractor called"<<std::endl;
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
    ClapTrap::operator=(other);
    return (*this);
}

ScavTrap::~ScavTrap()
{
    ClapTrap::~ClapTrap();
    std::cout<<"ScavTrap Destractor called"<<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->Energy_points > 0 && this->Hit_points > 0)
    {
        std::cout<<"ScavTrap "<<this->name<<" attacks "<<target<<", causig "<<this->Attack_damage<<" points of damage!"<<std::endl;
        this->Energy_points--;
    }
}

void    ScavTrap::guardGate()
{
    std::cout<<"ScavTrap is now in Gate keeper mode"<<std::endl;
}