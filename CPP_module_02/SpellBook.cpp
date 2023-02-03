/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:39:58 by ksura             #+#    #+#             */
/*   Updated: 2023/02/03 13:57:57 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{
	if(spellBook.size() > 0)
	{
		std::map<std::string, ASpell *>::iterator it = spellBook.begin();
		std::map<std::string, ASpell *>::iterator ite = spellBook.end();
		while (it != ite)
		{
			delete it->second;
			it++;
		}
	}
}

void	SpellBook::learnSpell(ASpell * spell)
{
	if (spell)
	{
		std::map<std::string, ASpell *>::iterator it = spellBook.find(spell->getName());
		if (it == spellBook.end())
		{
			spellBook[spell->getName()] = spell->clone();
		}
	}
}

void	SpellBook::forgetSpell(std::string const & spell)
{
	std::map<std::string, ASpell *>::iterator it = spellBook.find(spell);
	if(it != spellBook.end())
	{
		delete it->second;
		spellBook.erase(it);
	}
}

ASpell *	SpellBook::createSpell(std::string const & spell) const
{
	std::map<std::string, ASpell *>::const_iterator it = spellBook.find(spell);
	if (it != spellBook.end())
	{
		return(it->second->clone());
	}
	return (NULL);
}