#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
class Cure : public AMateria
{
	public: 
		Cure();
		~Cure();
		Cure(const Cure &other);
		Cure &operator=(const Cure &other);
		void use(ICharacter& target);
		virtual AMateria *clone() const;
};

// std::ostream    &operator<<(std::ostream &os, ICharacter const &target);


#endif