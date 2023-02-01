/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:09:21 by ksura             #+#    #+#             */
/*   Updated: 2023/02/01 14:53:39 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell()
{
	name = "no name";
	effects = "no effects";
}

ASpell::ASpell(std::string const newName, std::string const newEffects): name(newName), effects(newEffects)
{
	
}

ASpell::ASpell(ASpell const & obj)
{
	name = obj.name;
	effects = obj.effects;
}

ASpell::~ASpell()
{
}

ASpell & ASpell::operator=(ASpell const & obj)
{
	name = obj.name;
	effects = obj.effects;
	return (*this);
}
		
std::string const & ASpell::getName() const
{
	return (name);
}
	
	
std::string const & ASpell::getEffects() const
{
	return(effects);
}

void	ASpell::launch(ATarget const & target) const
{
	target.getHitBySpell(*this);
}