#include "DetermineRoundWinnerView.h"
#include "../../model/DetermineRoundWinner/DetermineRoundWinner.h"
#include <iostream>

int determineRoundWinnerView(const unsigned int playerSelection, const unsigned int pcSelection) {
	int winner = determineRoundWinner(playerSelection, pcSelection);
	std::cout << "El winner es: " << winner<<std::endl;

	return winner;
}