#include <iostream>
#include "SelectPlayerOptionView.h"
#include "../helpers/ShowErrosMsg.h"


int selectPlayerOption() {

	int option;
	bool optionSelected = false;

	do
	{
		std::cout << "1- Piedra" << std::endl;
		std::cout << "2- Papel" << std::endl;
		std::cout << "3- Tijera" << std::endl;

		std::cout << "Introduce una opcion: ";

		if (std::cin >> option) {

			if (option >= 1 && option <= 3){
				optionSelected = true;
			}
			else {
				showErrorMsg("La opcion ingresada no es valida. Vuelva a intentarlo");
			}
		}
		else {
			showErrorMsg("El caracter ingresado no es valido");
		}

	} while (!optionSelected);

	return option;

}