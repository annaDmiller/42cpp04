#include "../includes/Character.hpp"

Character::Character(std::string const &name) : _name(name), _inventory(NULL)
{
    this->_inventory = new AMateria*[4];
    for (int ind = 0; ind < 4; ind++)
        _inventory[ind] = NULL;
    return ;
}

Character::Character(const Character& other) : _name(other._name), _inventory(NULL)
{
    this->_inventory = new AMateria*[4];
    for (int ind = 0; ind < 4; ind++)
    {
        if (other._inventory[ind] == NULL)
            break ;
        (this->_inventory)[ind] = other._inventory[ind]->clone();
    }
    return ;
}

Character::~Character(void)
{
    for (int ind = 0; ind < 4; ind++)
        this->unequip(ind);
    delete[]this->_inventory;
    return ;
}

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        for (int ind = 0; ind < 4; ind++)
        {
            if (other._inventory[ind] == NULL)
                break ;
            (this->_inventory)[ind] = other._inventory[ind]->clone();
        }       
    }
    return (*this);
}

std::string const & Character::getName(void) const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    for (int ind = 0; ind < 4; ind++)
    {
        if (this->_inventory[ind] == NULL)
        {
            this->_inventory[ind] = m;
            break;
        }
    }
    return ;
}

void Character::unequip(int idx)
{
    this->_inventory[idx] = NULL;
    return ;
}

void Character::use(int idx, ICharacter& target)
{
    if (this->_inventory[idx] != NULL)
        this->_inventory[idx]->use(target);
    return ;
}