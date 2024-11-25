#include <iostream>
#include "game/view/SelectPlayerOptionView.h"
#include "game/view/SelectPcOptionView/SelectPcOptionView.h"

int main()
{
	int playerSelection = selectPlayerOption();

	std::cout << playerSelection << std::endl;

	int pcSelection = selectPcOptionView();

}

