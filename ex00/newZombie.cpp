#include "Zombie.hpp"

// Fonctions libre qui est en dehors de la classe
Zombie *newZombie(std::string name){

    /**
     * Zombie *objetzombie = new Zombie(name);
     * return (objetzombie);
     */

    return (new Zombie(name)); // Heap il faudra aujouté le destucteur

}