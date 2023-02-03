/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:57:00 by ksura             #+#    #+#             */
/*   Updated: 2023/02/01 16:54:19 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	public:


		ASpell();
		virtual ~ASpell();
		ASpell(std::string const newName, std::string const newEffects);
		ASpell(ASpell const & obj);

		ASpell & operator=(ASpell const & obj);
		
		std::string const & getName() const;
		std::string const & getEffects() const;

		virtual ASpell *	clone() const = 0;

		void	launch(ATarget const & target) const;

	private:

	protected:
		std::string name;
		std::string effects;
};

#endif