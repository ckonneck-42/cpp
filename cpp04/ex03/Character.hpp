#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include "ICharacter.hpp"


class Character : public ICharacter
{
public:
	Character();
	Character(const std::string &name);
	Character(const Character &other);
	~Character();
	Character &operator=(const Character &other);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	void initialize();

private:
	AMateria *_inventory[4];
	AMateria *_ground[9];
	std::string _name;
};

#endif