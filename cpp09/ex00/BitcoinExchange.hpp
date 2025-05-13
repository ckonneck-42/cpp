#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>

class BitcoinExchange
{
	public:
		BitcoinExchange();
		~BitcoinExchange();
		void parsecsv(std::ifstream &);
		void parseuinp(std::ifstream &);
	private:
		std::map<std::string, float> _db;
};



#endif