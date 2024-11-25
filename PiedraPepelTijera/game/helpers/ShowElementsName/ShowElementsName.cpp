#include "ShowElementsName.h"
#include "../../data/Elements.h"

std::string showElementName(const unsigned int id) {

	for (Element element : elements) {
		if (element.id == id) {
			return element.name;
		}
	}

	return "Elemento no encontrado";
}