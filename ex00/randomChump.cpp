#include "Zombie.hpp"

void    randomChump(std::string name){
    Zombie objetzombie(name); //Stack la detruit automatiquement a la fin
    objetzombie.announce();
}