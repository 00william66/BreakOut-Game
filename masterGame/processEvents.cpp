#include "BreakOutDem.h"

void BreakOutDem::processEvents() {
	sf::Event evnt;
	while (window_.pollEvent(evnt)) {
		switch (evnt.type) {
		case sf::Event::KeyPressed:
			handlePlayerInput(evnt.key.code, true);
			break;
		case sf::Event::KeyReleased:
			handlePlayerInput(evnt.key.code, false);
			break;
		case sf::Event::Closed:
			window_.close();
			break;
		}
	}
}