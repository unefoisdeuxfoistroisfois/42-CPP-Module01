#include "Harl.hpp"

Harl::Harl(){
    std::cout << "Harl is ready to complain..." << std::endl;
}

Harl::~Harl(){
    std::cout << "Harl has been silenced." << std::endl;
}

void    Harl::debug( void ){
    std::cout << " I love having extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-special- ";
   std::cout << "ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money.";
    std::cout << " You didn’t put enough bacon in my burger!";
    std::cout << " If you did, I wouldn’t be asking for more!" << std::endl;
}
        
void    Harl::warning( void ){
    std::cout << "I think I deserve to have some extra bacon for free.";
    std::cout << "I’ve been coming for years, ";
    std::cout << "whereas you started working here just last month." << std::endl;
}

void    Harl::error( void ){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ){
    std::string level

}