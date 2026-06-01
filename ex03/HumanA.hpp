#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
    private:
        std::string _name;
        Weapon &_objweapon;

    public:
        HumanA(std::string name, Weapon &objweapon);
        ~HumanA();

        void    attack();
};

#endif