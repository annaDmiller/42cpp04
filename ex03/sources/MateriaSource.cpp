#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource(), _materias(NULL)
{
    this->_materias = new AMateria*[4];
    for (int ind = 0; ind < 4; ind++)
        this->_materias[ind] = NULL;
    return ;
}

MateriaSource::MateriaSource(const MateriaSource& other) : IMateriaSource(other), _materias(NULL)
{
    this->_materias = new AMateria*[4];
    for (int ind = 0; ind < 4; ind++)
    {
        if (other._materias[ind] == NULL)
            this->_materias[ind] = NULL;
        else
            this->_materias[ind] = other._materias[ind]->clone();
    }
    return ;
}

MateriaSource::~MateriaSource(void)
{
    for (int ind = 0; ind < 4; ind++)
        if (this->_materias[ind] != NULL)
            delete(this->_materias[ind]);
    delete[]this->_materias;
    return ;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int ind = 0; ind < 4; ind++)
        {
            if (this->_materias[ind] != NULL)
                delete(this->_materias[ind]);
            if (other._materias[ind] != NULL)
                this->_materias[ind] = other._materias[ind]->clone();
            else
                this->_materias[ind] = NULL;
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* mat)
{
    for (int ind = 0; ind < 4; ind++)
    {
        if (this->_materias[ind] == NULL)
        {
            this->_materias[ind] = mat;
            break ;
        }
    }
    return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int ind = 0; ind < 4; ind++)
    {
        if (type == this->_materias[ind]->getType())
            return (this->_materias[ind]->clone());
    }
    return (NULL);
}