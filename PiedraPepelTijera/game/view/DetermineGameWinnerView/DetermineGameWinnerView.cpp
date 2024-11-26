#include "DetermineGameWinnerView.h"
#include "../../model/DetermineGameWinner/DetermineGameWinner.h"
#include "../../helpers/ShowRoundPoints/ShowRoundPoints.h"
#include "../../helpers/ShowGameResultMsg/ShowGameResultMsg.h"

bool determineGameWinnerView(const int winner, unsigned int& roundWonByPlayer, unsigned int& roundWonByPc) {

	bool isThereWinner = determineGameWinner(winner, roundWonByPlayer, roundWonByPc);

	if (roundWonByPlayer >= 2) {
		showRoundPoints(roundWonByPlayer, roundWonByPc);
		showGameResultMsg("EL JUGADOR!");
	}
	else if (roundWonByPc >= 2) {
		showRoundPoints(roundWonByPlayer, roundWonByPc);
		showGameResultMsg("LA PC!");
	}
	else {showRoundPoints(roundWonByPlayer, roundWonByPc);}

	return isThereWinner;
}