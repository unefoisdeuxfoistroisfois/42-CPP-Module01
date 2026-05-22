#include "Zombie.hpp"

void randomChump(std::string name){
    Zombie  zombie(name); //Stack la detruit automatiquement a la fin
    zombie.announce();
}