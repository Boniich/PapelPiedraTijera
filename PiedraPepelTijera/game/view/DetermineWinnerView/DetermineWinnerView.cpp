#include "DetermineWinnerView.h"
#include "../../model/DetermineWinner/DetermineWinner.h"
#include <iostream>

int determineWinnerView(const unsigned int playerSelection, const unsigned int pcSelection) {
	int winner = determineWinner(playerSelection, pcSelection);
	std::cout << "El winner es: " << winner<<std::endl;

	return winner;
}