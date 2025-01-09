/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:16:45 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/08 15:55:09 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanB
{
	private:
	std::string name;
	Weapon *weapon_Name;
	public:
	HumanB(const std::string &name);
	void setWeapon(Weapon &weapon_Name);
	void attack();
	~HumanB();
};

#endif