/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:42:50 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/21 22:40:12 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	FragTrap cp("alpha");
	ScavTrap cp2("omega");

	std::cout << cp.getName() << " has " << cp.getHitPt() <<" hp and " << cp.getEnergyPt() << " ep." << std::endl;
	std::cout << cp2.getName() << " has " << cp2.getHitPt() <<" hp and " << cp2.getEnergyPt() << " ep." << std::endl << std::endl;
	cp2.guardGate();
	cp.attack(cp2.getName());
	cp2.takeDamage(cp.getAtkDmg());
	std::cout << cp.getName() << " has " << cp.getHitPt() <<" hp and " << cp.getEnergyPt() << " ep." << std::endl;
	std::cout << cp2.getName() << " has " << cp2.getHitPt() <<" hp and " << cp2.getEnergyPt() << " ep." << std::endl << std::endl;
	cp2.beRepaired(10);
	cp2.attack(cp.getName());
	cp.takeDamage(cp2.getAtkDmg());
	std::cout << cp.getName() << " has " << cp.getHitPt() <<" hp and " << cp.getEnergyPt() << " ep." << std::endl;
	std::cout << cp2.getName() << " has " << cp2.getHitPt() <<" hp and " << cp2.getEnergyPt() << " ep." << std::endl << std::endl;
	cp.highFivesGuys();
	return (0);
}
