#include "Zombie.hpp"

Zombie* newZombie(std::string name){
    //Zombie *objet = new Zombie(name); // appel Constructeur via new
    //return (objet);

    return (new Zombie(name));
}