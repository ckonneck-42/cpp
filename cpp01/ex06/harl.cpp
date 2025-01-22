/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:50:57 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/14 16:46:33 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void complain(int logLevel)
{
	
	switch(logLevel)
	{
		case 4:
			std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
			break;
		case 3:
			std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
			break;
		case 2:
			std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
			break;
		case 1:
			std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
			break;
		default:
            std::cout << "invalid level" << std::endl;
			break;
	}
	logLevel--;
	if(logLevel > 0)
		complain(logLevel);
}

int getLogLevel(const std::string &level)
{
	if (level == "debug") return 4;
	if (level == "info") return 3;
	if (level == "warning") return 2;
	if (level == "error") return 1;
	return -1;
}