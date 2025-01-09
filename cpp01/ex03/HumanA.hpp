/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:16:40 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/08 13:23:28 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
	private:
    std::string name;
    Weapon &weapon_Name;
	public:
	HumanA(const std::string &name, Weapon &weapon_Name);
	void attack();
	~HumanA();

};

#endif