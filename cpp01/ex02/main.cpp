/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:53:25 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/17 16:55:45 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iomanip>
#include <string>
#include <iostream>

int main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;


	std::cout << &brain << std::endl; // memory adress of brain
	std::cout << stringPTR << std::endl; // memory adress of the stringPTR (slightly different from brain adress)
	std::cout << &stringREF << std::endl;  // memory adress of the brain (same as adress of brain, because a reference doesnt have a seperate adress)

	std::cout << brain << std::endl; // original string
	std::cout << *stringPTR << std::endl; // dereferencing stringpointer to get value of brain
	std::cout << stringREF << std::endl; // stringreference to the stringpointer
}
