/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:44:35 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/24 21:12:48 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H
# include <iostream>
# include <string>

class ClapTrap{
	protected :
		std::string		name;
		int				hit_pt;
		int				energy_pt;
		int				atk_dmg;
		ClapTrap(void);
	public :
		ClapTrap(const std::string&);
		ClapTrap(const ClapTrap&);
		~ClapTrap();
		ClapTrap&		operator=(const ClapTrap&);
		void			attack(const std::string&);
		void			takeDamage(unsigned int);
		void			beRepaired(unsigned int);
		void			setName(const std::string&);
		const std::string&	getName(void) const;
		int	getHitPt(void) const;
		int	getEnergyPt(void) const;
		int	getAtkDmg(void) const;

};

#endif
