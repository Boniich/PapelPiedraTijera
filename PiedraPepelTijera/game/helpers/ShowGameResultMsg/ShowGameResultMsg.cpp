#include "ShowGameResultMsg.h"
#include <iostream>

void showGameResultMsg(const char* winner) {
	std::cout << "" << std::endl;
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "\t\t\t FIN DEL JUEGO " << std::endl;
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "EL GANADOR DEL JUEGO ES: " << winner << std::endl;
	std::cout << "" << std::endl;
}