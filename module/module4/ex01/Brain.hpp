#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
class Brain{
    public:
        Brain();
        ~Brain();
        Brain(Brain &object);
        Brain &operator=(Brain &object);
        std::string getIdea(int i) const;
    private:
        std::string idea[100];
};


#endif 