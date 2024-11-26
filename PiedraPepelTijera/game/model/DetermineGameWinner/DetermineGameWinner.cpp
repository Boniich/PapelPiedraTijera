#include "DetermineGameWinner.h"

bool determineGameWinner(const int winner, unsigned int& roundWonByPlayer, unsigned int& roundWonByPc) {

	if (winner == 2) {
		roundWonByPlayer++;
		if (roundWonByPlayer >= 2) {
			return true;
		}
	}

	if (winner == 3) {
		roundWonByPc++;
		if (roundWonByPc >= 2) {
			return true;
		}
	}

	return false;
}