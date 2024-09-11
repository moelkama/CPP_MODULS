/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:34:18 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/09 17:34:48 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout<<"ClapTrap Default constractor called"<<std::endl;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string Name)
{
    std::cout<<"ClapTrap parameter constractor called"<<std::endl;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    this->name = Name;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    this->name = other.name;
    this->Hit_points = other.Hit_points;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout<<"ClapTrap "<<this->name<<" Destractor called"<<std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy_points > 0 && this->Hit_points > 0)
    {
        std::cout<<"ClapTrap "<<this->name<<" attacks "<<target<<", causig "<<this->Attack_damage<<" points of damage!"<<std::endl;
        this->Energy_points--;
    }
    else
        std::cout<<"ClapTrap "<<this->name<<" Can not attck "<<target<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout<<"ClapTrap "<<this->name<<" take damage : "<<amount<<std::endl;
    if (this->Hit_points > amount)
        this->Hit_points -= amount;
    else
        this->Hit_points = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy_points > 0 && this->Hit_points > 0)
    {
        std::cout<<"ClapTrap "<<this->name<<" repairs itself : "<<amount<<std::endl;
        this->Energy_points--;
        this->Hit_points += amount;
    }
    else
        std::cout<<"ClapTrap "<<this->name<<" can't repairs itself"<<std::endl;
}