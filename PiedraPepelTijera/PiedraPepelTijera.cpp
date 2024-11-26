#include <iostream>
#include "game/view/SelectPlayerOptionView/SelectPlayerOptionView.h"
#include "game/view/SelectPcOptionView/SelectPcOptionView.h"
#include "game/view/DetermineRoundWinnerView/DetermineRoundWinnerView.h"
#include "game/view/DetermineGameWinnerView/DetermineGameWinnerView.h"

int main()
{
	bool isRoundEnd = false;
	int roundNumber = 1;
	unsigned int roundWonByPlayer = 0;
	unsigned int roundWonByPc = 0;

	do
	{
		std::cout << "" << std::endl;
		std::cout << "-------------------------------------------------------------" << std::endl;
		std::cout << "RONDA: "<< roundNumber << std::endl;
		std::cout << "-------------------------------------------------------------" << std::endl;
		std::cout << "" << std::endl;

		int playerSelection = selectPlayerOption();
		int pcSelection = selectPcOptionView();

		int winner = determineRoundWinnerView(playerSelection, pcSelection);

		isRoundEnd = determineGameWinnerView(winner, roundWonByPlayer, roundWonByPc);

		roundNumber++;

	} while (!isRoundEnd);


	
	return 0;
}

