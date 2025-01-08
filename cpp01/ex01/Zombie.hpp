/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:53:28 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/07 16:05:02 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Zombie
{
	private:
	std::string name;
	public:
	Zombie();
	void announce(void);
	Zombie(std::string name);
	~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif