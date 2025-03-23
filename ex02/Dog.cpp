#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Dog is created" << std::endl;
    this->type = "Dog";
    this->brain = new Brain("I wanna play!");
    return ;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    this->type = other.type;
    this->brain = new Brain(*other.brain);
    return ;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor is called" << std::endl;
    delete (this->brain);
    return ;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        this->type = other.type;
        if (this->brain)
            delete (this->brain);
        this->brain = new Brain(*other.brain);
        }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Dog is barking" << std::endl;
    return ;
}

void    Dog::printIdeas(int quantity) const
{
    std::cout << "Dog's ideas are below:" << std::endl;
    this->brain->printIdeas(quantity);
    return ;
}