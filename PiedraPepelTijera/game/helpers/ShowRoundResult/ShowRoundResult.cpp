#include "ShowRoundResult.h"
#include "../../data/RoundResults.h"
#include <iostream>

void showRoundResult(const int winner) {
	if (winner == EMPATE.id) {
		showMsgResult(EMPATE.name);
	}

	if (winner == GANA_JUGADOR.id) {
		showMsgResult(GANA_JUGADOR.name);
	}

	if (winner == GANA_PC.id) {
		showMsgResult(GANA_PC.name);
	}
}

void showMsgResult(const std::string text) {
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "RESULTADO DE LA RONDA: " << text << std::endl;
}