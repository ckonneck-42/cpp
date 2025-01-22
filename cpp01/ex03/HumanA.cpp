/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:16:38 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/17 13:12:10 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon_Name)
    : name(name), weapon_Name(weapon_Name) {};

void HumanA::attack()
{
    std::cout << this->name << " attacks with " << this->weapon_Name.getType() << std::endl;
}

HumanA::~HumanA()
{

}