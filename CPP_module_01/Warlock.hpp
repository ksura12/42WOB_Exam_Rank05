/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:50:22 by ksura             #+#    #+#             */
/*   Updated: 2023/02/01 16:30:57 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include <map>

class Warlock
{
	private:
		Warlock(void);
		Warlock(Warlock const & obj);
		Warlock & operator=(Warlock const & obj);

		std::string		name;
		std::string		title;
		std::map<std::string, ASpell *> spellBook;

	public:
		
		Warlock(std::string const & newName, std::string const & newTitle);
		~Warlock();

		std::string const & getName() const;
		std::string const & getTitle() const;

		void	setTitle(std::string const & newTitle);
		void	introduce() const;

		void	learnSpell(ASpell const * spell);
		void	forgetSpell(std::string const & spell);
		void	launchSpell(std::string const & spell, ATarget const & target) const;
};

#endif