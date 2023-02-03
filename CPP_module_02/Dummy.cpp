/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:23:36 by ksura             #+#    #+#             */
/*   Updated: 2023/02/01 15:25:51 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy()
{
	type = "Target Practice Dummy";
	
}

Dummy::~Dummy()
{
}

Dummy *	Dummy::clone() const
{
	return (new Dummy());
}