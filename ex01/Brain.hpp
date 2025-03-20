#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
    private:
        std::string ideas[100];
    
    public:
        Brain(void);
        Brain(std::string idea);
        Brain(const Brain& other);
        virtual ~Brain(void);
        Brain& operator=(const Brain& other);

        void printIdeas(int quan) const;
};

#endif