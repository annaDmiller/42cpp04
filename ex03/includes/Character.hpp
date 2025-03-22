#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria** _inventory;

    public:
        Character(std::string const &name);
        Character(const Character& other);
        virtual ~Character(void);
        Character &operator=(const Character& other);

        virtual std::string const & getName(void) const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};

#endif