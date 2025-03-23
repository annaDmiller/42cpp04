#include "Animal.hpp"

Animal::Animal(void) : type("")
{
    std::cout << "Animal is created" << std::endl;
    return ;
}

Animal::Animal(const Animal& other)
{
    this->type = other.type;
    return ;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor is called" << std::endl;
    return ;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
        this->type = other.type;
    return (*this);
}

std::string Animal::getType(void) const
{
    return (this->type);
}
