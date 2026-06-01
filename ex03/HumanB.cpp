#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->_name = name;
    this->_objweapon = NULL;

    std::cout << "HumanB : " << _name << " created " << std::endl;
}

//HumanB::HumanB(std::string name) : _name(name), _objweapon(NULL) {}

HumanB::~HumanB(){
    std::cout << "has been destoyed" << std::endl;
}

void    HumanB::attack(){
    if (_objweapon != NULL) {
        std::cout << _name << " attacks with their " << this->_objweapon->getType() <<std::endl;
    }
    else {
        std::cout << _name << " has no weapon " << std::endl;
    }
}

void    HumanB::setWeapon(Weapon &objweapon){
    this->_objweapon = &objweapon; //stock l'adresse de l'arme dnas le *
}