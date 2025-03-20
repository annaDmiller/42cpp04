#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
    std::cout << "WrongCat is created" << std::endl;
    this->type = "WrongCat";
    return ;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    this->type = other.type;
    return ;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor is called" << std::endl;
    return ;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
        this->type = other.type;
    return (*this);
}
