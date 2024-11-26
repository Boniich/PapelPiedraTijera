#include "DetermineWinner.h"
#include "../../data/Elements.h"



//pasos
//1- Determinar si hay empate
//2- Determinar quien gano en base a las reglas del juego
// Piedra le gana a tijera
// Tijera le gana a papel 
// papel le gana a piedra


//1- empate
//2- gana jugador
//3- gana pc
//-1 - no coincide



int determineWinner(const unsigned int playerSelectedOption, const unsigned int pcSelectedOption) {

	unsigned int indexMatrix[3][2] = { {0,2},{2,1},{1,0} };
	unsigned int rowsIndex = 0;
	unsigned int columnsIndex = 1;
	bool isThereWinner = false;
	int winner = -1;

	if (playerSelectedOption == pcSelectedOption) {
		return 1;
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
	if (state != -1) return true;
	return false;
}


int getWinner(const unsigned int playerSelectedOption, const unsigned int pcSelectedOption,
	const unsigned int indexArryElement1, const unsigned int indexArryElement2) {

	if (playerSelectedOption == elements[indexArryElement1].id && pcSelectedOption == elements[indexArryElement2].id) {
		return 2;
	}

	if (pcSelectedOption == elements[indexArryElement1].id && playerSelectedOption == elements[indexArryElement2].id) {
		return 3;
	}
	return -1;
}


/*int rockWinToScissors = getWinner(playerSelectedOption, pcSelectedOption, 0, 2);

if (checkIfIsThereWinner(rockWinToScissors)) {
	return rockWinToScissors;
}

int scissorsWinToPaper = getWinner(playerSelectedOption, pcSelectedOption, 2, 1);

if (checkIfIsThereWinner(scissorsWinToPaper)) {
	return scissorsWinToPaper;
}

int paperWinToRock = getWinner(playerSelectedOption, pcSelectedOption, 1, 0);

if (checkIfIsThereWinner(paperWinToRock)) {
	return paperWinToRock;
}*/