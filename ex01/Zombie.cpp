#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name){
    this->name = name;
}

Zombie::Zombie(){
    this->name = "";
}

// Destructor
Zombie::~Zombie(){
    std::cout << name << ": has been destroyed" << std::endl;
}

void    Zombie::announce(){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name){
    this->name = name;
}