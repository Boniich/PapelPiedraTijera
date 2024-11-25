#include "SelectPcOption.h"
#include <cstdlib>
#include <ctime>

int selectPcOption() {

	std::srand(std::time(0));

	int optionSelected = 1+std::rand() % 3;

	return optionSelected;

}