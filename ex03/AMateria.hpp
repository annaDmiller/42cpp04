#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
    protected:

    public:
        AMateria(std::string const & type);
        AMateria(const AMateria& other);
        virtual ~AMateria(void);
        AMateria &operator=(const AMateria &other);

        std::string const & getType(void) const;

        virtual AMateria* clone(void) = 0;
        virtual void use(ICharacter& target);

};

#endif