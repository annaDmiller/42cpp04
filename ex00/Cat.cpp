#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Cat is created" << std::endl;
    this->type = "Cat";
    return ;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    this->type = other.type;
    return ;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor is called" << std::endl;
    return ;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
        this->type = other.type;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Cat is meowing" << std::endl;
    return ;
}