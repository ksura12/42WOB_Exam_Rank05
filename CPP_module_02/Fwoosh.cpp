/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:15:10 by ksura             #+#    #+#             */
/*   Updated: 2023/02/01 15:20:17 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
	name = "Fwoosh";
	effects = "fwooshed";
}

Fwoosh::~Fwoosh()
{}

Fwoosh * Fwoosh::clone() const
{
	return(new Fwoosh());
}