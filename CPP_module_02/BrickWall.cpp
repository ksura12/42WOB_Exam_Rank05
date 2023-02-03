/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:23:36 by ksura             #+#    #+#             */
/*   Updated: 2023/02/03 12:13:32 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall()
{
	type = "Inconspicuous Red-brick Wall";
	
}

BrickWall::~BrickWall()
{
}

BrickWall *	BrickWall::clone() const
{
	return (new BrickWall());
}