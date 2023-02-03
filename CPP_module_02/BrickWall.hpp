/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:21:05 by ksura             #+#    #+#             */
/*   Updated: 2023/02/03 12:11:57 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef BRICKWALL_HPP
#	define BRICKWALL_HPP
#include "ATarget.hpp"

class ATarget;

class BrickWall : public ATarget
{
	public:
		BrickWall();
		~BrickWall();
		
		virtual BrickWall *	clone() const;
	private:

	protected:
	
};

#endif