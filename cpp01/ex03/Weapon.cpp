/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:16:49 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/08 15:48:00 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon& setType(const std::string &type)
{
    Weapon* weapon = new Weapon();
    weapon->setType(type);
    return *weapon;
}

Weapon::Weapon()
{
	
}