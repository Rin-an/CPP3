/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:37:16 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/25 02:37:38 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAV_TRAP_H
#define SCAV_TRAP_H
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
	protected :
		ScavTrap(void);
	public :
		ScavTrap(const std::string&);
		ScavTrap(const ScavTrap&);
		~ScavTrap();
		ScavTrap&       operator=(const ScavTrap&);
		void			attack(const std::string&);
		void			guardGate(void);
};

#endif
