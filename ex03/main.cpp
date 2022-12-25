/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:42:50 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/25 03:00:27 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	FragTrap cp("alpha");
	ScavTrap cp2("omega");
	DiamondTrap cp3("beta");

	cp3.whoAmI();
	std::cout << "*********ClapTraps general informations*********" << std::endl;
	std::cout << cp.getName() << " has " << cp.getHitPt() <<" hp and " << cp.getEnergyPt() << " ep and " << cp.getAtkDmg() << " ad." <<std::endl;
	std::cout << cp2.getName() << " has " << cp2.getHitPt() <<" hp and " << cp2.getEnergyPt() << " ep and " << cp2.getAtkDmg() << " ad." << std::endl;
	std::cout << cp3.getName() << " has " << cp3.getHitPt() <<" hp and " << cp3.getEnergyPt() << " ep and " << cp3.getAtkDmg() << " ad." << std::endl;
   	std::cout << "************************************************" << std::endl << std::endl;
	cp3.attack("dummy");
	cp3.guardGate();
	cp3.highFivesGuys();
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
