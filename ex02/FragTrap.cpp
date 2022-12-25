/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 22:30:59 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/21 22:33:55 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	hit_pt = 100;
	energy_pt = 100;
	atk_dmg = 30;
	std::cout << "FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(const std::string& str)
{
	name = str;
	hit_pt = 100;
	energy_pt = 100;
	atk_dmg = 30;
	std::cout << "FragTrap constructor with argument called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& s)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = s;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& s)
{
	this->name = s.name;
	this->hit_pt = s.hit_pt;
	this->energy_pt = s.energy_pt;
	this->atk_dmg = s.atk_dmg;
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (this->hit_pt > 0 && this->energy_pt > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->atk_dmg << " points of damage!" << std::endl;
		this->energy_pt--;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << name << " requested a high five!" << std::endl;
}
