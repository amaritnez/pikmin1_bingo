#include "bingo/bingo.h"


void drawDebugBingoText(Graphics& gfx)
{
	gfx.setColour(COLOUR_BLACK, true);
	gfx.texturePrintf(gsys->mConsFont, 100.0f, 100.0f, "HI!!!!!!");
}; 
