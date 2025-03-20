#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Dog is created" << std::endl;
    this->type = "Dog";
    return ;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    this->type = other.type;
    return ;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor is called" << std::endl;
    return ;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
        this->type = other.type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Dog is barking" << std::endl;
    return ;
}