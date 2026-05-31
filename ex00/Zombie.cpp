#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name){
    this->name = name;
}

// Destructor
Zombie::~Zombie(){
    std::cout << name << ": has been destroy" << std::endl;
}

void    Zombie::announce(){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}