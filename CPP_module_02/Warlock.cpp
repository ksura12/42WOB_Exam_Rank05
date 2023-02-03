/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:10:57 by ksura             #+#    #+#             */
/*   Updated: 2023/02/03 14:09:15 by ksura            ###   ########.fr       */
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

void	Warlock::learnSpell(ASpell * spell)
{
	if (spell)
		spellBook.learnSpell(spell);
}

void	Warlock::forgetSpell(std::string const & spell)
{
	spellBook.forgetSpell(spell);
}

void	Warlock::launchSpell(std::string const & spell, ATarget const & target) const
{
	ASpell * newSpell = spellBook.createSpell(spell);
	if (newSpell)
	{
		newSpell->launch(target);
		delete newSpell;
	}
}