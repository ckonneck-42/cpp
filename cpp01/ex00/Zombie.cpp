/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:53:20 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/07 13:53:21 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Zombie " << this->name << " has risen from the heap." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " went back to her grave." << std::endl;
}