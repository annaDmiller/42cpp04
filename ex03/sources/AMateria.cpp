#include "../includes/AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
    return ;
}

AMateria::AMateria(const AMateria& other)
{
    this->_type = other._type;
    return ;
}

AMateria::~AMateria(void)
{

}

AMateria &AMateria::operator=(const AMateria &other)
{
    return (*this);
}

std::string const & AMateria::getType(void) const
{
    std::string const &ret_type = this->_type;
    return (ret_type);
}

void AMateria::use(ICharacter& target)
{
    return ;
}
