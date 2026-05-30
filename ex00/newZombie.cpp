#include "Zombie.hpp"

/* Fonction libre en dehors 
 * de la classe qui appel 
 * notre contructeur via new */
Zombie* newZombie( std::string name ){
   // Zombie *objetzombie = new Zombie(name);
   // return (objetzombie);

    return (new Zombie(name));
}