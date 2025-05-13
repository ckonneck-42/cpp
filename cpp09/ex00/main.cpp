#include "BitcoinExchange.hpp"

int main(int argc , char **argv)
{
	if(argc != 2)
	{
		std::cout << "usage: ./btc 'filename'" << std::endl;
		return (1);
	}
	std::cout << argv[1] << std::endl;
	std::ifstream datatable("data.csv");
	if (!datatable.is_open())
	{
		std::cerr << "Couldn't open the data.csv datatable, please check for spelling or permission errors" << std::endl;
		return (1);
	}
	std::ifstream userdata(argv[1]);
	if (!userdata.is_open())
	{
		std::cerr << "Couldn't open the provided datatable, please check for spelling or permission errors" << std::endl;
		return (1);
	}
	BitcoinExchange bcex;
	bcex.parsecsv(datatable);
	bcex.parseuinp(userdata);
}