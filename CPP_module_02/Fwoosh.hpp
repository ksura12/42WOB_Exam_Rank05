/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:12:07 by ksura             #+#    #+#             */
/*   Updated: 2023/02/03 11:52:11 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FWOOSH_HPP
# define FWOOSH_HPP
# include "ASpell.hpp"
#include <iostream>

class ASpell;

class Fwoosh : public ASpell
{
	public:
		Fwoosh();
		~Fwoosh();
		Fwoosh *	clone() const;
		
	private:

	protected:

};
#endif