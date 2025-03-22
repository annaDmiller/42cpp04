#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(const Ice& other);
        virtual ~Ice(void);
        Ice &operator=(const Ice &other);

        virtual Ice* clone(void);
        virtual void use(ICharacter& target);

};

#endif