#include "Harl.hpp"

int main(int argc, char **argv){

    if (argc != 2){
        std::cout << "Usage : ./harlFilter <choice>" << std::endl;
        std::cout << "choices : DEBUG, INFO, WARNING, ERROR" << std::endl;
        return (EXIT_FAILURE);
    }

    std::string cast = argv[1];
    if (cast != "DEBUG" && cast != "INFO" && cast != "WARNING" &&  cast != "ERROR"){
        std::cout << "Choice between DEBUG, INFO, WARNING and ERROR" << std::endl;
        return (EXIT_FAILURE);
    }

    int i = 0;
    bool found = false;

    std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (i = 0; i < 4 && found == false ; i++){
        if (cast == tab[i]){
            found = true;
        }
    }
    i--;

    Harl harl;
    switch (i){
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            harl.complain("DEBUG");
			// __attribute__ ((fallthrough)); linux/GCC
            // fall through

        case 1:
            std::cout << "[ INFO ]" << std::endl;
            harl.complain("INFO");
            // fall through

        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            harl.complain("WARNING");
            // fall through

        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("ERROR");
            break;

        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return (0);
} 