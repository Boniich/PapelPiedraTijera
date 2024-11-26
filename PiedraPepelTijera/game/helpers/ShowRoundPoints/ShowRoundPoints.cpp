#include "ShowRoundPoints.h"
#include <iostream>

void showRoundPoints(unsigned int playerPoints, unsigned int pcPoints) {
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "Rondas ganadas para el jugador: " << playerPoints << std::endl;
	std::cout << "Rondas ganadas para el PC: " << pcPoints << std::endl;
	std::cout << "-------------------------------------------------------------" << std::endl;
}