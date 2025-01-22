#include <string>
#include <iostream>
#include <fstream>
#include <sstream>


std::string replace(std::string buffer, std::string thingtofind, std::string replacement, unsigned int start)
{
	start = buffer.find(thingtofind);
	while (start != std::string::npos && start + thingtofind.size() <= buffer.size())
	{
		buffer.erase(start, thingtofind.size());
		buffer.insert(start, replacement);
		start = buffer.find(thingtofind, start + replacement.size());
	}
	return(buffer);
}

int main (int argc, char **argv)
{
	if(argc != 4)
	{
		std::cout << "usage: ./replace filename char_to_replace replacement" << std::endl;
		return(1);
	}
	std::ifstream file(argv[1]);
	if (!file.is_open())
	{
		std::cout << "couldn't open file" << std::endl;
		return(1);
	}
	std::string buffer;
	std::string thingtofind = argv[2];
	std::string replacement = argv[3];
	unsigned int start = 0;
	std::ostringstream newfile_stream;
	newfile_stream << argv[1] << ".replacement";
	std::string newfile = newfile_stream.str();
	std::ofstream replacementfile(newfile.c_str());
	if (!replacementfile.is_open())
	{
		std::cout << "couldn't open replacementfile: " << newfile <<std::endl;
		return(1);
	}
	while(std::getline(file, buffer))
	{
		buffer = replace(buffer, thingtofind, replacement, start);
		replacementfile << buffer << std::endl;
	}
	file.close();
	replacementfile.close();
}
