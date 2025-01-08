/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonneck <ckonneck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:16:45 by ckonneck          #+#    #+#             */
/*   Updated: 2025/01/08 15:55:09 by ckonneck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

class HumanB
{
	private:
	std::string type;
	public:
	HumanB();
	HumanB(const std::string &type);
	void getType();
	HumanB& setType(const std::string &type);
	~HumanB();
};