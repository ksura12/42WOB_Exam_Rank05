/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:12:07 by ksura             #+#    #+#             */
/*   Updated: 2023/02/03 15:58:46 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIREBALL_HPP
# define FIREBALL_HPP
# include "ASpell.hpp"
#include <iostream>

class Fireball;

class Fireball : public ASpell
{
	public:
		Fireball();
		~Fireball();
		Fireball *	clone() const;
		
	private:

	protected:

};
#endif