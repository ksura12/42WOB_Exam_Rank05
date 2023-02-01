/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:50:22 by ksura             #+#    #+#             */
/*   Updated: 2023/02/01 13:01:18 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>


class Warlock
{
	private:
		Warlock(void);
		Warlock(Warlock const & obj);
		Warlock & operator=(Warlock const & obj);

		std::string		name;
		std::string		title;

	public:
		
		Warlock(std::string const & newName, std::string const & newTitle);
		~Warlock();

		std::string const & getName() const;
		std::string const & getTitle() const;

		void	setTitle(std::string const & newTitle);
		void	introduce() const;

};

#endif