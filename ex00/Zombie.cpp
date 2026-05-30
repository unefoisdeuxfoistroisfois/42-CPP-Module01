#include "Zombie.hpp"

// Constructeur
Zombie::Zombie(std::string name){
    this->name = name;
}

// Déstructeur
Zombie::~Zombie(void){
    std::cout << name << " has been destroyed" << std::endl;
}

void Zombie::announce(void){ //mettre le void car en C++98

    //name doit venir de notre consrtucteur
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}