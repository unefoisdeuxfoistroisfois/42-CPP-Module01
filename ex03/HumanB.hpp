#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    private:
        std::string _name;
        Weapon *_objweapon;

    public:
        HumanB(std::string name);
        ~HumanB();

        void    attack();
        // car il ne sera pas donner au constructeur
        void    setWeapon(Weapon &objweapon);
};

#endif