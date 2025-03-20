#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Cat is created" << std::endl;
    this->type = "Cat";
    this->brain = new Brain("I wanna rule the world!");        
    return ;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    this->type = other.type;
    this->brain = other.brain;
    return ;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor is called" << std::endl;
    delete (this->brain);
    return ;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        this->type = other.type;
        this->brain = other.brain;
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Cat is meowing" << std::endl;
    return ;
}

void    Cat::printIdeas(int quantity) const
{
    std::cout << "Cat's ideas are below:" << std::endl;
    this->brain->printIdeas(quantity);
    return ;
}