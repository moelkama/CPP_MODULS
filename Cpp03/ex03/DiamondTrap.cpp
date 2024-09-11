/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:35:39 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/09 18:56:22 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout<<"DiamondTrap Default constractor called"<<std::endl;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string Name)
{
    std::cout<<"DiamondTrap parameter constractor called"<<std::endl;
    this->ScavTrap::name = Name + "_clap_trap";
    this->name = Name;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
    *this = other;
}

DiamondTrap&    DiamondTrap::operator=(const DiamondTrap& other)
{
    this->ScavTrap::operator=(other);
    this->FragTrap::operator=(other);
    this->name = other.name;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<"Diamond Destractor called"<<std::endl;
}

void    DiamondTrap::whoAmI()const
{
    std::cout<<"both name : "<<this->name<<", its ClapTrap name : "<<this->ClapTrap::name<<std::endl;
}