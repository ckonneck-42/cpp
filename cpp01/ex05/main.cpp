/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:22:37 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/15 14:13:42 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
int main(void)
{
	harl h;
	std::string level;
	std::cout << "Enter a level \ndebug = 1\ninfo= 2\nwarning = 3\nerror = 4\n>";
    std::getline(std::cin, level);
	h.complain(level);
}