#include "Menu.h"
#include <iostream>
#include "../coreGame/PlayGame/PlayGame.h"

void menu() {
    bool endGame = false;
    int opcion;
    do
    {

        std::cout << "--- Menu --- " << std::endl;
        std::cout << "1- Jugar" << std::endl;
        std::cout << "2- Salir" << std::endl;
        std::cout << "Selecciona una opcion: ";

        if (std::cin >> opcion) {
            switch (opcion)
            {
            case 1:
                system("cls");
                playGame();
                break;
            case 2:
                std::cout << "Adios! hasta la proxima!" << std::endl;
                endGame = true;
                break;
            default:
                std::cout << "La opcion no es valida. Vuelve a intentarlo" << std::endl;
                break;
            }
        }
        else {
            system("cls");
            std::cout << "---------------------------------------" << std::endl;
            std::cout << "Error: se ingreso un caracter no valido" << std::endl;
            std::cout << "---------------------------------------" << std::endl;
            std::cin.clear();
            std::cin.ignore();
        }
    } while (!endGame);
}