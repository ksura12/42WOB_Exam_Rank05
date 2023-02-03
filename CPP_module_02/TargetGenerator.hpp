/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:50:22 by ksura             #+#    #+#             */
/*   Updated: 2023/02/03 15:57:23 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <iostream>
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
	private:
		TargetGenerator(TargetGenerator const & obj);
		TargetGenerator & operator=(TargetGenerator const & obj);

		std::map<std::string, ATarget*> targetBook;


	public:
		
		TargetGenerator();
		~TargetGenerator();

		void	learnTargetType(ATarget * target);
		void	forgetTargetType(std::string const & targetType);
		ATarget *	createTarget(std::string const & targetType) const;
};

#endif