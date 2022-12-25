/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:42:50 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/21 22:24:13 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap cp("alpha");
	ScavTrap cp2("omega");

	cp2.guardGate();
	cp.attack("omega");
	cp2.takeDamage(cp.getAtkDmg());
	std::cout << cp.getName() << " has " << cp.getHitPt() <<" hp and " << cp.getEnergyPt() << " ep." << std::endl;
	std::cout << cp2.getName() << " has " << cp2.getHitPt() <<" hp and " << cp2.getEnergyPt() << " ep." << std::endl;
	cp2.beRepaired(10);
	std::cout << cp.getName() << " has " << cp.getHitPt() <<" hp and " << cp.getEnergyPt() << " ep." << std::endl;
	std::cout << cp2.getName() << " has " << cp2.getHitPt() <<" hp and " << cp2.getEnergyPt() << " ep." << std::endl;
	return (0);
}
