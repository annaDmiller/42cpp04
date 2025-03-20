#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    int num = 10;
    Animal** arr = new Animal*[num];
    for (int ind = 0; ind < num / 2; ind++)
        arr[ind] = new Dog();
    for (int ind = num / 2; ind < num; ind++)
        arr[ind] = new Cat();
    std::cout << "-----------------------------------" << std::endl;
    for (int ind = 0; ind < num; ind++)
        arr[ind]->makeSound();
    std::cout << "-----------------------------------" << std::endl;
    arr[0]->printIdeas(5);
    std::cout << "-----------------------------------" << std::endl;
    arr[5]->printIdeas(5);
    std::cout << "-----------------------------------" << std::endl;
    for (int ind = 0; ind < num; ind++)
        delete(arr[ind]);
    delete[](arr);
    return (0);
}
