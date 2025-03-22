#include "../includes/Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    return ;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
    this->_type = other._type;
    return ;
}

Cure::~Cure(void)
{
    return ;
}

Cure &Cure::operator=(const Cure &other)
{
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

Cure* Cure::clone(void)
{
    Cure* ret_cure = new Cure(*this);
    return (ret_cure);
}
void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    return ;
}
