#include <iostream>
#include "game/view/SelectPlayerOptionView/SelectPlayerOptionView.h"
#include "game/view/SelectPcOptionView/SelectPcOptionView.h"
#include "game/view/DetermineWinnerView/DetermineWinnerView.h"

int main()
{
	int playerSelection = selectPlayerOption();
	int pcSelection = selectPcOptionView();

	determineWinnerView(playerSelection, pcSelection);
	
	return 0;
}

