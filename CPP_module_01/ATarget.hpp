/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:24:52 by ksura             #+#    #+#             */
/*   Updated: 2023/02/01 16:53:49 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	public:
		ATarget();
		ATarget(std::string newType);
		~ATarget();

		ATarget(ATarget const & obj);
		ATarget & operator=(ATarget const & obj);
		
		std::string const getType() const;
		
		virtual ATarget *	clone() const = 0;

		void	getHitBySpell(ASpell const & spell) const;
	
	protected:
		std::string type;

	private:
		
		
	
};

#endif