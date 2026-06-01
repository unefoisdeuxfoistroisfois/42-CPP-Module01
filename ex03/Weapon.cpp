#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    this->_type = type;
}

Weapon::~Weapon(){
    std::cout << "Weapon " << _type << " destroyed" << std::endl;
}

// Get
const std::string& Weapon::getType(){
    return (this->_type);
}

// Set
void    Weapon::setType(std::string type){
    this->_type = type;
}
