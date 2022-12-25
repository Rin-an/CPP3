/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 22:28:56 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/21 22:34:44 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public :
		FragTrap(void);
		FragTrap(const std::string&);
		FragTrap(const FragTrap&);
		~FragTrap();
		FragTrap&		operator=(const FragTrap&);
		void			attack(const std::string&);
		void			highFivesGuys(void);
};

#endif
