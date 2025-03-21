#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;

    public:
        Dog(void);
        Dog(const Dog& other);
        virtual ~Dog(void);
        Dog& operator=(const Dog& other);

        virtual void makeSound(void) const;
        virtual void printIdeas(int quantity) const;
};

#endif