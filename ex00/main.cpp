#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << std::endl;

        std::cout << "Cat's type is " << i->getType() << " " << std::endl;
        std::cout << "Dog's type is " << j->getType() << " " << std::endl;
        std::cout << std::endl;

        i->makeSound();
        j->makeSound();
        meta->makeSound();
        std::cout << std::endl;

        delete(i);
        delete(j);
        delete(meta);
    }
    std::cout << "-----------------------------------------" << std::endl;
    {
        const WrongAnimal* anim = new WrongAnimal();
        const WrongAnimal* cat = new WrongCat();
        std::cout << std::endl;
        
        std::cout << "Wrong Cat's type is " << cat->getType() << " " << std::endl;
        std::cout << std::endl;

        std::cout << "Wrong Animal makeSound function -> ";
        anim->makeSound();
        std::cout << "Wrong Cat makeSound function -> ";
        cat->makeSound();
        std::cout << std::endl;

        delete(cat);
        delete(anim);
    }
    return (0);
}
