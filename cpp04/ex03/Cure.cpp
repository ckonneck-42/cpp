#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
}


Cure::Cure(const Cure &other) : AMateria(other)
{
    std::cout << "Cure copy constructor called" << std::endl;
    // this. //UNFINISHED
}

Cure &Cure::operator=(const Cure &other)
{
	std::cout << "Cure copy operator called" << std::endl;
    if (this == &other)
        return (*this);
    AMateria::operator=(other);
    return (*this);
}



// Dog::Dog(const Dog &other) : Animal(other)  // Copy base class
// {
//     std::cout << "Dog copy constructor called" << std::endl;
//     this->_brain = new Brain(*other._brain);  // Deep copy
// }

// Dog &Dog::operator=(const Dog &other)
// {
//     if (this == &other)
//         return (*this);

//     Animal::operator=(other);

//     delete this->_brain;  // Prevent memory leaks
//     this->_brain = new Brain(*other._brain);  // Deep copy of Brain

//     return (*this);
// }

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s Wounds" << std::endl;
}


Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const {
    return new Cure(*this); // Creates a new copy of the current object
}

// std::ostream& operator<<(std::ostream& os, ICharacter const &target) {
//     os << target._name();
//     return os;
// }