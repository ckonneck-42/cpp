/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:53:25 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/08 11:14:51 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
	Zombie* zombiehorde;
	int N = 3;
	zombiehorde = zombieHorde(N , "Lisa");
	for(int i = 0; i < N; i++)
	{
		std::cout << "Zombie Nr " << i+1 << ": ";
		zombiehorde[i].announce();
	}
	delete[] zombiehorde;
}

// delete[] zombiehorde; deletes the whole array of zombiehorde, doesnt need to individually delete every single one, but the whole array at once.