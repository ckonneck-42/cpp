/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:16:52 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/17 14:31:11 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon();
		Weapon(const std::string &type);
		const std::string &getType() const;
		Weapon& setType(const std::string &type);
		~Weapon();
};

#endif