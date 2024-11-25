#pragma once
#include <iostream>

struct Element {
	unsigned int id;
	std::string name;
};

const Element elements[3] = { {1,"Piedra"},{2,"Papel"},{3,"Tijera"} };