#include "SelectPcOptionView.h"
#include <iostream>
#include "../../model/SelectPcOption/SelectPcOption.h"

int selectPcOptionView() {

	int seleted = selectPcOption();

	std::cout << "La opcion seleccionada por la PC es: " << seleted << std::endl;

	return seleted;
}