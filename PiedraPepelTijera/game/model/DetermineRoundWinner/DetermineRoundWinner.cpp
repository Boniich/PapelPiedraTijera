#include "DetermineRoundWinner.h"
#include "../../data/Elements.h"
#include "../../data/RoundResults.h"



//pasos
//1- Determinar si hay empate
//2- Determinar quien gano en base a las reglas del juego
// Piedra le gana a tijera
// Tijera le gana a papel 
// papel le gana a piedra

int determineRoundWinner(const unsigned int playerSelectedOption, const unsigned int pcSelectedOption) {

	unsigned int indexMatrix[3][2] = { {0,2},{2,1},{1,0} };
	unsigned int rowsIndex = 0;
	unsigned int columnsIndex = 1;
	bool isThereWinner = false;
	int winner = NO_COINCIDE.id;

	if (playerSelectedOption == pcSelectedOption) {
		return EMPATE.id;
	}

	do {
		int state = getWinner(playerSelectedOption, pcSelectedOption, indexMatrix[rowsIndex][0], indexMatrix[rowsIndex][1]);
		rowsIndex++;

		if (checkIfIsThereWinner(state)) {
			isThereWinner = true;
			winner = state;
		}

	} while (!isThereWinner || rowsIndex <3);

	return winner;
}

bool checkIfIsThereWinner(int state) {
	if (state != NO_COINCIDE.id) return true;
	return false;
}


int getWinner(const unsigned int playerSelectedOption, const unsigned int pcSelectedOption,
	const unsigned int indexArryElement1, const unsigned int indexArryElement2) {

	if (playerSelectedOption == elements[indexArryElement1].id && pcSelectedOption == elements[indexArryElement2].id) {
		return GANA_JUGADOR.id;
	}

	if (pcSelectedOption == elements[indexArryElement1].id && playerSelectedOption == elements[indexArryElement2].id) {
		return GANA_PC.id;
	}
	return NO_COINCIDE.id;
}