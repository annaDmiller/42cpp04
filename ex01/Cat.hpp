#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
        
    public:
        Cat(void);
        Cat(const Cat& other);
        virtual ~Cat(void);
        Cat& operator=(const Cat& other);

        virtual void makeSound(void) const;
        virtual void printIdeas(int quantity) const;
};

#endif