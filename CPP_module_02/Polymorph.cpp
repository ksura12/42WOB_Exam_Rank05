/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:15:10 by ksura             #+#    #+#             */
/*   Updated: 2023/02/03 11:59:09 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph()
{
	name = "Polymorph";
	effects = "turned into a critter";
}

Polymorph::~Polymorph()
{}

Polymorph * Polymorph::clone() const
{
	return(new Polymorph());
}