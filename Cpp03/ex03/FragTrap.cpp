/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:35:53 by moelkama          #+#    #+#             */
/*   Updated: 2023/10/09 18:59:38 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout<<"FragTrap Defualt constractor called"<<std::endl;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout<<"FragTrap parameter constractor called"<<std::endl;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
    std::cout<<"FragTrap Copy assignmet constractor called"<<std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap& other)
{
    std::cout<<"FragTrap copy assignment operator called"<<std::endl;
    ClapTrap::operator=(other);
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap "<<this->name<<" Destractor called"<<std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout<<"High five for your awesomeness! Keep shining!"<<std::endl;
}