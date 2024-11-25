#include "ShowErrorMsg.h"
#include <iostream>

void showErrorMsg(const char* text) {
	system("cls");
	std::cout << "-------------------------------------------------------------------------" << std::endl;
	std::cout <<" Error: "<< text << std::endl;
	std::cout << "-------------------------------------------------------------------------" << std::endl;
	std::cin.clear();
	std::cin.ignore();
}