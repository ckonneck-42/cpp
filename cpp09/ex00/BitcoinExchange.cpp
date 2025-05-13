#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::~BitcoinExchange(){}

void BitcoinExchange::parsecsv(std::ifstream &csv)
{
	std::string line;
	std::getline(csv,line);
	while(std::getline(csv, line))
	{
		std::string date;
		std::string value;
		std::size_t commapos = line.find(',');
		if (commapos == std::string::npos)
		{
			std::cout << "couldn't find ',' in line: " << line << std::endl;
			continue; 
		}
		date = line.substr(0, commapos);
		value = line.substr(commapos + 1);

		float valuef = atof(value.c_str());
		
		_db[date] = valuef;
	}
}


bool isValidDate(const std::string& date)
{
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        return false;
 
    int year = atoi(date.substr(0, 4).c_str());
    int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());
    if (year < 2009 || year > 2025 || month < 1 || month > 12 || day > 31 || day < 1)
	{
        return false;
	}
    return true;
}

bool isValidFloat(const float valuef, const std::string &line)
{
	if (valuef < 0)
	{
		std::cout << "not a positive value in line: " << line <<std::endl;
		return false;
	}
	if (valuef >= 2147483648)
	{
		std::cout << "number too high in line: " << line <<std::endl;
		return false;
	}
	return true;
}
void BitcoinExchange::parseuinp(std::ifstream &userinputfile)
{
	std::string line;
	while(std::getline(userinputfile, line))
	{ 

		line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
		std::string date;
		std::string value;
		std::size_t commapos = line.find('|');
		if (commapos == std::string::npos)
		{
			std::cout << "couldn't find '|' in line: " << line << std::endl;
			continue; 
		}
		date = line.substr(0, commapos);
		value = line.substr(commapos + 1);
		
		if (!isValidDate(date))
		{
			std::cout << "Error: bad input => " << date << std::endl;
			continue;
		}
		float valuef = atof(value.c_str());
		if (!isValidFloat(valuef, line))
			continue;
		std::map<std::string, float>::iterator it = _db.find(date);

        if (it == _db.end())
		{
			it = _db.lower_bound(date);
			if (it == _db.begin() && it->first > date)
			{
				std::cout << "no earlier exchange rate available for date: " << date << std::endl;
				continue;
			}
			if (it == _db.end() || it->first > date)
        		--it;
			if (!isValidFloat(it->second, line))
				continue;
			std::cout << "going to most previous date from: "<< date << " to: " << it->first << "   ";
			std::cout << date << " => " << valuef << " = " << valuef * it->second << std::endl;
        }
		else
		{
            std::cout << date << " => " << valuef << " = " << valuef * it->second << std::endl;
        }

	}
}