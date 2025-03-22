#include "../includes/IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
    return ;
}

IMateriaSource::IMateriaSource(const IMateriaSource& other)
{
    (void) other;
    return ;
}

IMateriaSource::~IMateriaSource(void)
{
    return ;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& other)
{
    (void) other;
    return (*this);
}