#include "Zombie.hpp"

int main(){

    //Stack (pile)
    // Zombie objetzombie("Bradley");
    //objetzombie.announce();

    //Heap (tas)
    Zombie *objetzombie = new Zombie("Bradley");
    objetzombie->announce();
    delete objetzombie; // détruit et libère la memoire

    randomChump("Divina");

    return (0);
}