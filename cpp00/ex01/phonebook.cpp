
#include "phonebook.hpp"


void Contact::displayContactInfo() const 
	{
        std::cout << "First Name: " << first_name_ << std::endl;
        std::cout << "Last Name: " << last_name_ << std::endl;
        std::cout << "Nickname: " << nickname_ << std::endl;
        std::cout << "Phone Number: " << phone_number_ << std::endl;
        std::cout << "Darkest Secret: " << darkest_secret_ << std::endl;
	}

void Contact::setContactInfo(const std::string &first_name, const std::string &last_name, const std::string &nickname,
						const std::string &phone_number, const std::string &darkest_secret)
	{
		first_name_ = first_name;
		last_name_	= last_name;
		nickname_	= nickname;
		phone_number_ = phone_number;
		darkest_secret_ = darkest_secret;
	}

std::string truncate(std::string &str)
{
    if (str.length() > 9)
        return str.substr(0, 9) + ".";
    return str;
}

void Contact::tableFunction(int i)
{

    std::cout << "|";
    std::cout.width(10); std::cout << std::right << i+1;
    std::cout << "|";
    std::cout.width(10); std::cout << std::right << truncate(first_name_);
    std::cout << "|";
    std::cout.width(10); std::cout << std::right << truncate(last_name_);
    std::cout << "|";
    std::cout.width(10); std::cout << std::right << truncate(nickname_);
    std::cout << "|\n";
}

int	PhoneBook::SaveContactInformation(int i)
{
	std::string first_name, last_name, nickname, phone_number, darkest_secret;

	std::cout << "Enter details for contact "
				<< ":\n";
    if (!getInput("First Name: ", first_name))
        return(-1);
    if (!getInput("Last Name: ", last_name))
        return(-1);
    if (!getInput("Nickname: ", nickname))
        return(-1);
    if (!getInput("Phone Number: ", phone_number))
        return(-1);
    if (!getInput("Darkest Secret: ", darkest_secret))
        return(-1);

    std::cout << "First Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phone_number << std::endl;
    std::cout << "Darkest Secret: " << darkest_secret << std::endl;
	 std::cout << "\nYour contact information has been saved successfully to "<< i+1 << std::endl;
	contacts[i].setContactInfo(first_name, last_name, nickname, phone_number,
		darkest_secret);
	std::cout << std::endl;
    return(0);
}

bool getInput(const std::string& prompt, std::string& input) 
{
    do
    {
        std::cout << prompt;
        std::getline(std::cin, input);
        if(std::cin.eof())
            return(false);  
        if (input.empty())
        {
            std::cerr << "Input is empty! Please try again." << std::endl;
        }
    } 
    while (input.empty());
    return true;
}

void PhoneBook::displayTable()
{
    std::cout << "input a number, 1 to 8\n";
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < 8; i++)
        contacts[i].tableFunction(i);
}

void PhoneBook::searchFunction(int num)
{
    contacts[num-1].displayContactInfo();
}

int	main(void)
{
    PhoneBook phonebook;
    int i = 0;
    int num = 0;
    std::string command;
    std::cout << "\nGreetings! All your contacts have been cleared successfully, please enter new ones, i swear i won't lose them this time.\n";
    while(1)
    {
        std::cout << "\nYou have arrived at the Main Menu. Choose one: ADD, SEARCH, EXIT\n";
        std::getline(std::cin, command);
        
        if (command == "ADD")
        {
            if (i <= 7)
            {
                std::cout << "you chose ADD.\n";
                if(phonebook.SaveContactInformation(i++) == -1)
                    break;
            }
            else
            {
                i = 0;
                std::cout << "you chose ADD.\n";
                if(phonebook.SaveContactInformation(i++) == -1)
                    break;
            }
        }
        else if (command == "SEARCH")
        {
            phonebook.displayTable();
            if((num = getnbr(command)) == -1)
                break;
            std::cout << "you chose: ", std::cout << num, std::cout << std::endl;
            phonebook.searchFunction(num);
        }
        else if (command == "EXIT" || std::cin.eof())
        {
            std::cout << "aight imma head out\n";
            break;
        }
        else
             std::cout << "invalid input, please try again.\n";
    }
}


int getnbr(std::string& command)
{
    int num;
    bool validInput = false;

    while (!validInput)
    {
        std::cout << "Enter a number between 1 and 8: ";
        std::getline(std::cin, command);
        if (std::cin.eof())
            return(-1);
        try
        {
            num = std::stoi(command);
            if (num >= 1 && num <= 8)
                validInput = true;
            else
                std::cout << "Please enter a number between 1 and 8." << std::endl;
        }
        catch (const std::invalid_argument& e) {
            std::cout << "Invalid input. Please enter a number between 1 and 8." << std::endl;
        } 
        catch (const std::out_of_range& e) {
            std::cout << "Number out of range. Please enter a number between 1 and 8." << std::endl;
        }
    }
    return num;
}