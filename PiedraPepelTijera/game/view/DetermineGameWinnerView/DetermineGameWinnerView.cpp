#include "DetermineGameWinnerView.h"
#include <iostream>
#include "../../model/DetermineGameWinner/DetermineGameWinner.h"

bool determineGameWinnerView(const int winner, unsigned int& roundWonByPlayer, unsigned int& roundWonByPc) {

	bool isThereWinner = determineGameWinner(winner, roundWonByPlayer, roundWonByPc);

	if (roundWonByPlayer >= 2) {
		std::cout << "-------------------------------------------------------------" << std::endl;
		std::cout << "Rondas ganadas para el jugador: " << roundWonByPlayer << std::endl;
		std::cout << "Rondas ganadas para el PC: " << roundWonByPc << std::endl;
		std::cout << "-------------------------------------------------------------" << std::endl;


		std::cout << "El jugador ha ganado el juego" << std::endl;
	}
	else if (roundWonByPc >= 2) {
		std::cout << "-------------------------------------------------------------" << std::endl;
		std::cout << "Rondas ganadas para el jugador: " << roundWonByPlayer << std::endl;
		std::cout << "Rondas ganadas para el PC: " << roundWonByPc << std::endl;
		std::cout << "-------------------------------------------------------------" << std::endl;


		std::cout << "La PC ha ganado el juego" << std::endl;
	}
	else {
		std::cout << "-------------------------------------------------------------" << std::endl;
		std::cout << "Rondas ganadas para el jugador: " << roundWonByPlayer << std::endl;
		std::cout << "Rondas ganadas para el PC: " << roundWonByPc << std::endl;
		std::cout << "-------------------------------------------------------------" << std::endl;
	}

	return isThereWinner;
}