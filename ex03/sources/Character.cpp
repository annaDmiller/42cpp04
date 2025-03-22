#include "../includes/Character.hpp"
#include "../includes/AMateria.hpp"

Character::Character(std::string const &name) : ICharacter(), _name(name), _inventory(NULL)
{
    this->_inventory = new AMateria*[4];
    for (int ind = 0; ind < 4; ind++)
        _inventory[ind] = NULL;
    return ;
}

Character::Character(const Character& other) : ICharacter(other), _name(other._name), _inventory(NULL)
{
    this->_inventory = new AMateria*[4];
    for (int ind = 0; ind < 4; ind++)
    {
        if (other._inventory[ind] == NULL)
            this->_inventory[ind] = NULL;
        else
            this->_inventory[ind] = other._inventory[ind]->clone();
    }
    return ;
}

Character::~Character(void)
{
    for (int ind = 0; ind < 4; ind++)
        if (this->_inventory[ind] != NULL)
            delete(this->_inventory[ind]);
    delete[]this->_inventory;
    return ;
}

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        for (int ind = 0; ind < 4; ind++)
        {
            if (this->_inventory[ind] != NULL)    
                delete(this->_inventory[ind]);
            if (other._inventory[ind] != NULL)
                this->_inventory[ind] = other._inventory[ind]->clone();
            else
                this->_inventory[ind] = NULL;
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