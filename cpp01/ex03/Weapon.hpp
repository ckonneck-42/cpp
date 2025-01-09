/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:16:52 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/08 15:49:38 by ckonneck         ###   ########.fr       */
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
	std::string getType();
	Weapon& setType(const std::string &type);
	~Weapon();
};

#endif