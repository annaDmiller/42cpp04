#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria** materias;

    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource& other);
        virtual ~MateriaSource(void);
        MateriaSource& operator=(const MateriaSource& other);
        
        virtual void learnMateria(AMateria* mat);
        virtual AMateria* createMateria(std::string const & type);
};

#endif