/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:34:18 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/25 01:53:18 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_H
#define DIAMOND_TRAP_H
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
	std::string	name;
	DiamondTrap(void);
	public :
		DiamondTrap(const std::string&);
		DiamondTrap(const DiamondTrap&);
		~DiamondTrap();
		DiamondTrap&		operator=(const DiamondTrap&);
		void				attack(const std::string&);
		const std::string&		getName(void) const;
		void				whoAmI(void);
};

#endif
