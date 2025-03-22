#include "../includes/AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
    return ;
}

AMateria::AMateria(const AMateria& other) : _type(other._type)
{
    return ;
}

AMateria::~AMateria(void)
{
    return ;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

std::string const & AMateria::getType(void) const
{
    std::string const &ret_type = this->_type;
    return (ret_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* " << target.getName() << " *" << std::endl;
    return ;
}
