#include "PlayGame.h"
#include "../../view/SelectPlayerOptionView/SelectPlayerOptionView.h"
#include "../../view/SelectPcOptionView/SelectPcOptionView.h"
#include "../../view/DetermineRoundWinnerView/DetermineRoundWinnerView.h"
#include "../../view/DetermineGameWinnerView/DetermineGameWinnerView.h"
#include "../../helpers/ShowRoundNumber/ShowRoundNumber.h"

void playGame() {
	bool isRoundEnd = false;
	unsigned int roundNumber = 1;
	unsigned int roundWonByPlayer = 0;
	unsigned int roundWonByPc = 0;

	do
	{
		showRoundNumber(roundNumber);

		int playerSelection = selectPlayerOption();
		int pcSelection = selectPcOptionView();

		int winner = determineRoundWinnerView(playerSelection, pcSelection);

		isRoundEnd = determineGameWinnerView(winner, roundWonByPlayer, roundWonByPc);

		roundNumber++;

	} while (!isRoundEnd);

}