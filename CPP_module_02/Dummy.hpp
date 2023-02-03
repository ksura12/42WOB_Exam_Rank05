/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:21:05 by ksura             #+#    #+#             */
/*   Updated: 2023/02/01 15:26:21 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef DUMMY_HPP
#	define DUMMY_HPP
#include "ATarget.hpp"

class ATarget;

class Dummy : public ATarget
{
	public:
		Dummy();
		~Dummy();
		
		virtual Dummy *	clone() const;
	private:

	protected:
	
};

#endif