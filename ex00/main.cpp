#include "Zombie.hpp"

int main(){
    // Stack (pile)
    //Zombie objetzombie("Brad");
    //objetzombie.announce();

    // Heap (tas)
    Zombie *objetzombie = newZombie("Bradley");
    objetzombie->announce();
    delete objetzombie;

    randomChump("Divina");

    return (0);
}