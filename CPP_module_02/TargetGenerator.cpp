/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:39:58 by ksura             #+#    #+#             */
/*   Updated: 2023/02/03 15:52:01 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{
	if(targetBook.size() > 0)
	{
		std::map<std::string, ATarget *>::iterator it = targetBook.begin();
		std::map<std::string, ATarget	 *>::iterator ite = targetBook.end();
		while (it != ite)
		{
			delete it->second;
			it++;
		}
	}
}

void	TargetGenerator::learnTargetType(ATarget * target)
{
	if (target)
	{
		std::map<std::string, ATarget *>::iterator it = targetBook.find(target->getType());
		if (it == targetBook.end())
		{
			targetBook[target->getType()] = target->clone();
		}
	}
}

void	TargetGenerator::forgetTargetType(std::string const & target)
{
	std::map<std::string, ATarget *>::iterator it = targetBook.find(target);
	if(it != targetBook.end())
	{
		delete it->second;
		targetBook.erase(it);
	}
}

ATarget *	TargetGenerator::createTarget(std::string const & target) const
{
	std::map<std::string, ATarget *>::const_iterator it = targetBook.find(target);
	if (it != targetBook.end())
	{
		return(it->second->clone());
	}
	return (NULL);
}