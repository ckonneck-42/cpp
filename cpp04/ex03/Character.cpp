#include "Character.hpp"


Character::Character() : _name("Unnamed")
{
	std::cout << "Character constructor called" << std::endl;
	initialize();
}

Character::Character(const std::string &name) : _name(name)
{
	std::cout << "Character name constructor called" << std::endl;
	initialize();
}

void Character::initialize()
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 9; i++)
		this->_ground[i] = NULL;
}


std::string const &Character::getName() const
{
    return (this->_name);
}

Character::Character(const Character &other) : _name(other._name)
{
    std::cout << "Character copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i])
            this->_inventory[i] = other._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }

    for (int i = 0; i < 9; i++)
    {
        if (other._ground[i])
            this->_ground[i] = other._ground[i]->clone();
        else
            this->_ground[i] = NULL;
    }
}

Character &Character::operator=(const Character &other)
{
    std::cout << "Character operator copy constructor called" << std::endl;
    if (this == &other)
    {
        return *this;
    }

    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
        {
            std::cout << "all materias that " << this->_name << " had, have been deleted and overwritten." << std::endl;
            break;
        }
    }
    // Clean up existing memory
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
        {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        if (this->_ground[i])
        {
            delete this->_ground[i];
            this->_ground[i] = NULL;
        }
    }

    this->_name = other._name;

    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i])
            this->_inventory[i] = other._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }

    for (int i = 0; i < 9; i++)
    {
        if (other._ground[i])
            this->_ground[i] = other._ground[i]->clone();
        else
            this->_ground[i] = NULL;
    }

    return *this;
}

void Character::equip(AMateria* m)
{
    // so technically to rule out any chance of segfaults in the main
    // i'd have to crosscheck every materia that is being tried to equip
    // with all available characters, and see if others have ownership of those items
    //already.
	if (!m) return;
	for (int n = 0; n < 9; n++)
	{
		if (m == this->_ground[n])
		{
			int idx = n;
			for (int n = 0; n < 4; n++)
			{
				if (this->_inventory[n] == NULL)
				{
					std::cout << this->_name << " picked up and equipped " << m->getType() << " from the ground slot " << idx;
					this->_inventory[n] = this->_ground[idx];
					std::cout << " and put it into inventory slot " << n << std::endl;
					this->_ground[idx] = NULL;
					return;
				}
			}
		}
	}
	for (int n = 0; n < 4; n++)
    {
        if (this->_inventory[n] == m)
        {
            std::cout << "Materia is already equipped in slot " << n << "." << std::endl;
            return;
        }
    }
	for(int n = 0; n < 4; n++)
	{
		if (!this->_inventory[n])
		{
			this->_inventory[n] = m;
			std::cout << this->_name << " equipped " << m->getType() << " in slot " << n << "." <<std::endl;
			return;
		}
	}
	std::cout << "inventory is full" << std::endl;
}

void Character::unequip(int idx)
{

	if (idx >= 4 || idx < 0)
	{
		std::cout << "slots only range from 0 to 3"<< std::endl;
		return;
	}
	if (this->_inventory[idx])
    {
        // Find an empty slot in _ground[]
        for (int i = 0; i < 9; i++)
        {
            if (this->_ground[i] == NULL) // Found an empty slot
            {
                this->_ground[i] = this->_inventory[idx]; // Store unequipped Materia
                this->_inventory[idx] = NULL;
                std::cout << "Slot " << idx << " has been unequipped and placed on the ground (slot " << i << ")." << std::endl;
                return;
            }
        }
        std::cout << "Ground is full! You should definitely stop littering. There is trash everywhere now thanks to your excessive testing." << std::endl;
	}
	else
		std::cout << "there was nothing equipped at slot " << idx << "." <<std::endl;
}

void Character::use(int idx, ICharacter& target)
{

	if (idx >= 4 || idx < 0)
	{
		std::cout << "slots only range from 0 to 3."<< std::endl;
		return;
	}
	if(this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "no item equipped at this slot." << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
     for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i]) // Only delete if it's not NULL
        {
			std::cout << "debug inventory nr: "<< i << "from " << this->_name + " :" << this->_inventory[i]->getType() << std::endl;
            delete this->_inventory[i];
            this->_inventory[i] = NULL; // Avoid dangling pointers
        }
    }
	for (int i = 0; i < 9; i++)
    {
        if (this->_ground[i]) // Only delete if it's not NULL
        {
			std::cout << "debug ground nr: "<< i << " " << this->_ground[i]->getType() << std::endl;
            delete this->_ground[i];
            this->_ground[i] = NULL; // Avoid dangling pointers
        }
    }
}