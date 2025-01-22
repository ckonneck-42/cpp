/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:53:22 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/17 16:48:14 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie zombie2("Bob");
	zombie2.announce();
	std::cout << "Zombie " << name << " has risen from the stack." << std::endl;
}