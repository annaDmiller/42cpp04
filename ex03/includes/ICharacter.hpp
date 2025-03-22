#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>

class AMateria;

class ICharacter
{
    public:
        ICharacter(void);
        ICharacter(const ICharacter& other);
        virtual ~ICharacter(void);
        ICharacter& operator=(const ICharacter& other);

        virtual std::string const & getName(void) const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

#endif