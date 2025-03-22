#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
    public:
        IMateriaSource(void);
        IMateriaSource(const IMateriaSource& other);
        virtual ~IMateriaSource(void);
        IMateriaSource& operator=(const IMateriaSource& other);
        
        virtual void learnMateria(AMateria* mat) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif