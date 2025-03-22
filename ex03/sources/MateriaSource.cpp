#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource(), _materias(NULL)
{
    return ;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    return ;
}

MateriaSource::~MateriaSource(void)
{
    return ;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    return (*this);
}