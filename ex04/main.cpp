#include <iostream>
#include <fstream>

void    ft_replace(std::string &line, std::string s1, std::string s2){

    size_t  pos = line.find(s1); // cherche s1 dans line

    while (pos != std::string::npos)  // tant que s1 est trouvé
    {
        line.erase(pos, s1.size());   // supprime s1
        line.insert(pos, s2);         // insere s2 à la même position
        pos = line.find(s1, pos + s2.size());  // cherche le prochain s1
    }
}

int main(int argc, char **argv){

    std::ifstream file; // class pour lire un fichier
    std::ofstream outfile;
    std::string line;

    if (argc != 4){
        std::cout << "Usage : <filename> <s1> <s2>" << std::endl;
        return (EXIT_FAILURE);
    }

    // open
    file.open(argv[1]);
    std::string outfilename = std::string(argv[1]) + ".replace";
    outfile.open(outfilename);

    if (file.fail()){
        std::cout << "Error : " << argv[1] << "is not a file" << std::endl;
        return (EXIT_FAILURE);
    }

    // getline gere deja le eof
    while (std::getline(file, line)){

        // chaque line j'appele 
        ft_replace(line, argv[2], argv[3]);
        // std::cout << line << "\n";
        outfile << line << "\n"; 
    }

    file.close();
    outfile.close();
    return (0);
}