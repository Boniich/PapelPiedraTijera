#include <iostream>
#include "game/view/SelectPlayerOptionView/SelectPlayerOptionView.h"
#include "game/view/SelectPcOptionView/SelectPcOptionView.h"
#include "game/view/DetermineRoundWinnerView/DetermineRoundWinnerView.h"

int main()
{
	bool isRoundEnd = false;
	int roundNumber = 1;
	int roundWonByPlayer = 0;
	int roundWonByPc = 0;

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



		if (winner == 2) {
			roundWonByPlayer++;
			if (roundWonByPlayer >= 2) {
				isRoundEnd = true;
				std::cout << "Ha ganado el jugador" << std::endl;
			}
		}

		if (winner == 3) {
			roundWonByPc++;
			if (roundWonByPc >= 2) {
				isRoundEnd = true;
				std::cout << "Ha ganado la PC" << std::endl;
			}
		}

		std::cout << "-------------------------------------------------------------" << std::endl;
		std::cout << "Rondas ganadas para el jugador: " << roundWonByPlayer << std::endl;
		std::cout << "Rondas ganadas para el PC: " << roundWonByPc << std::endl;
		std::cout << "-------------------------------------------------------------" << std::endl;

		roundNumber++;

	} while (!isRoundEnd);


	
	return 0;
}

