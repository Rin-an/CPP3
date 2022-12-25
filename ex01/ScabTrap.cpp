/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScabTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:08:48 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/21 22:08:24 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	hit_pt = 100;
	energy_pt = 50;
	atk_dmg = 20;
	std::cout << "ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap(const std::string& str)
{
	name = str;
	hit_pt = 100;
	energy_pt = 50;
	atk_dmg = 20;
	std::cout << "ScavTrap constructor with argument called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& s)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = s;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& s)
{
	this->name = s.name;
	this->hit_pt = s.hit_pt;
	this->energy_pt = s.energy_pt;
	this->atk_dmg = s.atk_dmg;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hit_pt > 0 && this->energy_pt > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->atk_dmg << " points of damage!" << std::endl;
		this->energy_pt--;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << name << " is in guarding mode!" << std::endl;
}
