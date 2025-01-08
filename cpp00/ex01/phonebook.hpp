#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
	private:
	std::string first_name_;
	std::string last_name_;
	std::string nickname_;
	std::string phone_number_;
	std::string darkest_secret_;
	public:
	void setContactInfo(const std::string &first_name, const std::string &last_name, const std::string &nickname,
						const std::string &phone_number, const std::string &darkest_secret);
	void displayContactInfo() const;
	void tableFunction(int i);
};

bool 	getInput(const std::string& prompt, std::string& input);
int 	getnbr(std::string& command);

class PhoneBook
{
	private:
    Contact contacts[8];
	public:
	int	SaveContactInformation(int i);
	void searchFunction(int num);
	void displayTable();
};