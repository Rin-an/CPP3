/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:53:32 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/21 22:20:36 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): hit_pt(10), energy_pt(10), atk_dmg(0)
{
	std::cout << "ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string &str): name(str), hit_pt(10), energy_pt(10), atk_dmg(0)
{
	std::cout << "ClapTrap name constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c)
{
	std::cout << "ClapTrap copy constructor called." << std::endl;
	*this = c;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called." << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& c)
{
	this->name = c.name;
	this->hit_pt = c.hit_pt;
	this->energy_pt = c.energy_pt;
	this->atk_dmg = c.atk_dmg;
	return (*this);
}

void	ClapTrap::setName(const std::string& n)
{
	this->name = n;
}

const std::string&	ClapTrap::getName(void) const
{
	return (this->name);
}

int	ClapTrap::getHitPt(void) const
{
	return (this->hit_pt);
}

int	ClapTrap::getEnergyPt(void) const
{
	return (this->energy_pt);
}

int	ClapTrap::getAtkDmg(void) const
{
	return (this->atk_dmg);
}

void	ClapTrap::attack(const std::string&  target)
{
	if (this->hit_pt > 0 && this->energy_pt > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->atk_dmg << " points of damage!" << std::endl;
		this->energy_pt--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ( (int) amount >= 0)
	{
		if (this->hit_pt - (int) amount > 0)
			this->hit_pt -= amount;
		else
			this->hit_pt = 0;
		std::cout << "****************" << std::endl;
		std::cout << this->name << " lost " << amount << " hp!" << std::endl;
		std::cout << "Current hp: " << this->hit_pt << std::endl;
		std::cout << "****************" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_pt > 0 && this->hit_pt > 0)
	{
		std::cout << this->name << " restored " << amount << " hp for 1 energy point!" << std::endl;
		this->energy_pt--;
		this->hit_pt += amount;
	}
	else
	{
		std::cout << "Ep or hp reached 0" << std::endl;
	}
}
