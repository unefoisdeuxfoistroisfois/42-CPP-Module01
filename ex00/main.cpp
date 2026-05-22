#include "Zombie.hpp"

int main(){
    //Zombie zombie("Bradley");
    //zombie.announce();

    //Test Heap avec newZombie
    Zombie *objetzombie = new Zombie("Bradley");
    objetzombie->announce(); //si c'etait pas un * on aurait utliser .
    delete objetzombie;

    //Test Stack avec fonction libre
    randomChump("Divina");

    return(0);
}