#include <iostream>
#include <cstring>
int main(int argc, char* argv[]){
    char ch;
    std::string command = argv[1];
    if (command=="up"){
        for (int i=2; i<argc; i++){
            for (int j=0; j<strlen(argv[i]); j++){
                std::string string = argv[i];
                ch = std::toupper(argv[i][j]);
                std::cout << ch;
                }
        std::cout << ' ';
        }
    }
    if (command=="down"){
        for (int i=2; i<argc; i++){
            for (int j=0; j<strlen(argv[i]); j++){
                std::string string = argv[i];
                ch = std::tolower(argv[i][j]);
                std::cout << ch;
                }
        std::cout << ' ';
        }
    }
    std::cout << '\n';
    return 0;
}