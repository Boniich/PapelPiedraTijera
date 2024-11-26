#include "DetermineGameWinnerView.h"
#include <iostream>
#include "../../model/DetermineGameWinner/DetermineGameWinner.h"
#include "../../helpers/ShowRoundPoints/ShowRoundPoints.h"

bool determineGameWinnerView(const int winner, unsigned int& roundWonByPlayer, unsigned int& roundWonByPc) {

	bool isThereWinner = determineGameWinner(winner, roundWonByPlayer, roundWonByPc);

	if (roundWonByPlayer >= 2) {
		showRoundPoints(roundWonByPlayer, roundWonByPc);
		std::cout << "El jugador ha ganado el juego" << std::endl;
	}
	else if (roundWonByPc >= 2) {
		showRoundPoints(roundWonByPlayer, roundWonByPc);
		std::cout << "La PC ha ganado el juego" << std::endl;
	}
	else {showRoundPoints(roundWonByPlayer, roundWonByPc);}

	return isThereWinner;
}