#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), objweapon(weapon){
    std::cout << "HumanA" << _name << " created with " << objweapon.getType() << std::endl;
}

HumanA::~HumanA(){
    std::cout << "has been destoyed" << std::endl;
}

void    HumanA::attack(){
    std::cout << _name << " attacks with their " << objweapon.getType() <<std::endl;
}