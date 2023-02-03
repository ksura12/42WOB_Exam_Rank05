/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:15:10 by ksura             #+#    #+#             */
/*   Updated: 2023/02/03 11:56:56 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball()
{
	name = "Fireball";
	effects = "burnt to a crisp";
}

Fireball::~Fireball()
{}

Fireball * Fireball::clone() const
{
	return(new Fireball());
}