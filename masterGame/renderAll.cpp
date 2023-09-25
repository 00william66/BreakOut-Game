#include "BreakOutDem.h"

void BreakOutDem::renderAll() {
	window_.clear();
	plate_.renderPlatform(window_);
	ball_.renderBall(window_);
	grid_.renderGrid(window_);
	window_.display();
}



