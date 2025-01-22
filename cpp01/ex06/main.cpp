/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:47:38 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/17 14:38:37 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(int argc, char **argv)
{
	std::string level;
	if (argc != 2)
	{
		std::cout << "usage: ./harlFilter \"level\" (debug, info, error or warning)" << std::endl;
		return(1);
	}
	level = argv[1];
	int logLevel = getLogLevel(level);
	complain(logLevel);
}

