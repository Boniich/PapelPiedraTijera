#pragma once
#include <string>

struct RoundResult {
	int id;
	std::string name;
};

const RoundResult NO_COINCIDE = { -1, "Error" };
const RoundResult EMPATE = { 1,"Empate" };
const RoundResult GANA_JUGADOR = { 2,"Gana Jugador" };
const RoundResult GANA_PC = { 3,"Gana PC" };
