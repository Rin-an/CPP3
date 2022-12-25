/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 22:28:56 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/25 02:07:37 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	protected :
		FragTrap(void);
	public :
		FragTrap(const std::string&);
		FragTrap(const FragTrap&);
		~FragTrap();
		FragTrap&		operator=(const FragTrap&);
		void			attack(const std::string&);
		void			highFivesGuys(void);
};

#endif
