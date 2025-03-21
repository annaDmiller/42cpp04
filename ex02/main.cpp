#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    //const Animal* meta = new Animal(); <- can't launch it as we can't create instance of abstract class
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;

    std::cout << "Cat's type is " << j->getType() << " " << std::endl;
    std::cout << "Dog's type is " << i->getType() << " " << std::endl;
    std::cout << std::endl;

    i->makeSound();
    j->makeSound();
    std::cout << std::endl;

    delete(i);
    delete(j);
    return (0);
}
