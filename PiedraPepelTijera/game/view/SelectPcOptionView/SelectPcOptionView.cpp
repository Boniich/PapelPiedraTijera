#include "SelectPcOptionView.h"
#include <iostream>
#include "../../model/SelectPcOption/SelectPcOption.h"
#include "../../helpers/ShowElementsName/ShowElementsName.h"

int selectPcOptionView() {

	int seleted = selectPcOption();

	std::string name = showElementName(seleted);

	std::cout << "La opcion seleccionada por la PC es: " << name << std::endl;

	return seleted;
}