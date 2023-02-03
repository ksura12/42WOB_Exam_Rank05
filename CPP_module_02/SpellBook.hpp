/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:50:22 by ksura             #+#    #+#             */
/*   Updated: 2023/02/03 12:45:37 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <iostream>
#include "ASpell.hpp"
#include <map>

class SpellBook
{
	private:
		SpellBook(SpellBook const & obj);
		SpellBook & operator=(SpellBook const & obj);

		std::map<std::string, ASpell *> spellBook;

	public:
		SpellBook();
		~SpellBook();
		
		void		learnSpell(ASpell * spell);
		void		forgetSpell(std::string const & spell);
		ASpell *	createSpell(std::string const & spell) const;
};

#endif