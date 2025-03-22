#include "../includes/ICharacter.hpp"

ICharacter::ICharacter(void)
{
    return ;
}

ICharacter::ICharacter(const ICharacter& other)
{
    (void) other;
    return ;
}

ICharacter::~ICharacter(void)
{
    return ;
}

ICharacter& ICharacter::operator=(const ICharacter& other)
{
    (void) other;
    return (*this);
}