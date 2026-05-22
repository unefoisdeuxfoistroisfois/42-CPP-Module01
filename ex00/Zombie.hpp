#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string name;

    public:
        Zombie(std::string name);
        ~Zombie(void); // toujours en void
        void    announce(void);

};

/* Fonciton libre */

// newZombie.cpp
Zombie* newZombie(std::string name);
//randomChump.cpp
void randomChump(std::string name);

#endif