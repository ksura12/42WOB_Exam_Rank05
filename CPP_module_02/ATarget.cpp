/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:44:19 by ksura             #+#    #+#             */
/*   Updated: 2023/02/03 16:00:43 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget()
{
	type = "no type";
}

ATarget::ATarget(std::string newType): type(newType)
{}

ATarget::~ATarget()
{}

ATarget	& ATarget::operator=(ATarget const & obj)
{
	type = obj.type;
	return(*this);
}

std::string const ATarget::getType() const
{
	return(type);
}

void	ATarget::getHitBySpell(ASpell const & spell) const
{
	std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl;
}