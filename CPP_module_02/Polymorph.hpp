/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:12:07 by ksura             #+#    #+#             */
/*   Updated: 2023/02/03 15:58:57 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP
# include "ASpell.hpp"
#include <iostream>

class Polymorph;

class Polymorph : public ASpell
{
	public:
		Polymorph();
		~Polymorph();
		Polymorph *	clone() const;
		
	private:

	protected:

};
#endif