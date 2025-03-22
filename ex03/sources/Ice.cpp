#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    return ;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
    this->_type = other._type;
    return ;
}

Ice::~Ice(void)
{
    return ;
}

Ice &Ice::operator=(const Ice &other)
{
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

Ice* Ice::clone(void)
{
    Ice* ret_cure = new Ice(*this);
    return (ret_cure);
}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return ;
}
