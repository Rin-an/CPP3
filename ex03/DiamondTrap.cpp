/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 23:58:39 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/25 02:57:59 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
/*	this->hit_pt = FragTrap::hit_pt;
	this->energy_pt = ScavTrap::energy_pt;
	this->atk_dmg = FragTrap::atk_dmg;*/
	std::cout << "DiamondTrap constructor called." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const std::string& str)
{
	FragTrap	ft(name);
	ScavTrap	st(name);

	this->name = str;
	ClapTrap::name = str + "_clap_name";
	hit_pt = ft.getHitPt();
	energy_pt = st.getEnergyPt();
	atk_dmg = ft.getAtkDmg();
	std::cout << "DiamondTrap constructor with argument called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& s)
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	*this = s;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& s)
{
	this->name = s.name;
	this->hit_pt = s.hit_pt;
	this->energy_pt = s.energy_pt;
	this->atk_dmg = s.atk_dmg;
	return (*this);
}

const std::string&	DiamondTrap::getName(void) const
{
	return (this->name);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "*******************************"<< std::endl;
	std::cout << "DiamondTrap identifying..." << std::endl;
	std::cout << "Name: " << this->name << "\nClapTrap name: " << ClapTrap::name << std::endl;
	std::cout << "*******************************"<< std::endl;
}
