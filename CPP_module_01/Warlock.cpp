/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:10:57 by ksura             #+#    #+#             */
/*   Updated: 2023/02/01 16:51:26 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const & newName, std::string const & newTitle) : name(newName), title(newTitle)
{
	std::cout << getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << getName() << ": My job here is done!" << std::endl;
}


std::string const & Warlock::getName() const
{
	return (name);
}


std::string const & Warlock::getTitle() const
{
	return (title);
}

void	Warlock::setTitle(std::string const & newTitle)
{
	title = newTitle;
}

void	Warlock::introduce() const
{
	std::cout << getName() << ": I am "<< getName() << ", " << getTitle() << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell const * spell)
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

void	Warlock::forgetSpell(std::string const & spell)
{
	std::map<std::string, ASpell *>::iterator it = spellBook.find(spell);
	if (it != spellBook.end())
	{
		delete it->second;
		spellBook.erase(it);
	}
}

void	Warlock::launchSpell(std::string const & spell, ATarget const & target) const
{
	std::map<std::string, ASpell *>::const_iterator it = spellBook.find(spell);
	if (it != spellBook.end())
		it->second->launch(target);
}