/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:26:45 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/17 14:35:43 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void harl::complain(std::string level)
{
	int index = std::atoi(level.c_str());

    void (harl::*levels[4])(void);
    levels[0] = &harl::debug;
    levels[1] = &harl::info;
    levels[2] = &harl::warning;
    levels[3] = &harl::error;
	index -= 1;
    if (index >= 0 && index <= 3)
    {
        (this->*levels[index])();
    }
    else
    {
        std::cout << "invalid input." << std::endl;
    }
}