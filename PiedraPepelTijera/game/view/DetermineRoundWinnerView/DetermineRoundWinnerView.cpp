#include "DetermineRoundWinnerView.h"
#include "../../model/DetermineRoundWinner/DetermineRoundWinner.h"
#include "../../helpers/ShowRoundResult/ShowRoundResult.h"
#include <iostream>

int determineRoundWinnerView(const unsigned int playerSelection, const unsigned int pcSelection) {
	int winner = determineRoundWinner(playerSelection, pcSelection);
	showRoundResult(winner);
	return winner;
}