#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(const Cure& other);
        virtual ~Cure(void);
        Cure &operator=(const Cure &other);

        virtual Cure* clone(void);
        virtual void use(ICharacter& target);
};

#endif