#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("")
{
    std::cout << "WrongAnimal is created" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    this->type = other.type;
    return ;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor is called" << std::endl;
    return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
        this->type = other.type;
    return (*this);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal sound is... unknown..." << std::endl;
    return ;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}