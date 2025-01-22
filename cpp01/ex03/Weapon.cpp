/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:16:49 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/17 14:31:53 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon& Weapon::setType(const std::string &type)
{
    this->type = type;
    return *this;
}

const std::string &Weapon::getType() const
{
    return(type);
}

Weapon::Weapon() : type("") {}

Weapon::Weapon(const std::string &type) : type(type) 
{
    
}

Weapon::~Weapon()
{

}