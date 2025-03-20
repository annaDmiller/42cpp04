#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain is activated" << std::endl;
    for (int ind = 0; ind < 100; ind++)
        this->ideas[ind] = "";
    return ;
}

Brain::Brain(std::string idea)
{
    std::cout << "Brain is activated" << std::endl;
    for (int ind = 0; ind < 100; ind++)
        this->ideas[ind] = idea;
    return ;
}

Brain::Brain(const Brain& other)
{
    for (int ind = 0; ind < 100; ind++)
        this->ideas[ind] = other.ideas[ind];
    return ;
}

Brain::~Brain(void)
{
    std::cout << "Brain is destructed" << std::endl;
    return ;
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        for (int ind = 0; ind < 100; ind++)
            this->ideas[ind] = other.ideas[ind];
    }
    return (*this);
}

void Brain::printIdeas(int quan) const
{
    for (int ind = 0; ind < quan; ind++)
        std::cout << "Idea " << (ind + 1) << " is '" << this->ideas[ind] << "'" << std::endl;
    return ;
}
