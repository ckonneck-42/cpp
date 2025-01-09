/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:16:43 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/08 13:17:01 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name): name(name), weapon_Name(NULL) {};

void HumanB::attack()
{
    if (weapon_Name)
        std::cout << name << " attacks with " << weapon_Name->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack with!" << std::endl;
}


void HumanB::setWeapon(Weapon &weapon_Name)
{
    this->weapon_Name = &weapon_Name;
}

HumanB::~HumanB() {}