#include "bingo/bingo.h"

BingoCore::BingoCore()
{
	for (int i = 0; i < MAX_NUM_CARDS; i++) {
		card[i] = CHECK_DEBUG;
	}
}

void BingoCore::drawDebugBingoText(Graphics& gfx)
{
	for (int i = 0; i < CARD_COLUMN_SIZE; i++) {
		for (int j = 0; j < CARD_ROW_SIZE; j++) {
			gfx.setColour(COLOUR_WHITE, true);
			gfx.texturePrintf(gsys->mConsFont, (CARD_TEXT_START_CORD_X * j + 1) + (CARD_TEXT_SPACING_CORD_X * j + 1),
			                  (CARD_TEXT_START_CORD_Y * i + 1) + (CARD_TEXT_SPACING_CORD_Y * i + 1), "HI!");
		}
	}
};

void BingoCore::drawBingoCard(Graphics& gfx)
{
	for (int i = 0; i < CARD_COLUMN_SIZE; i++) {
		for (int j = 0; j < CARD_ROW_SIZE; j++) {
			// drawDebugBingoText(gfx, (CARD_TEXT_START_CORD_X * j+1) + (CARD_TEXT_SPACING_CORD_X * j+1),
			//     (CARD_TEXT_START_CORD_Y * i+1) + (CARD_TEXT_SPACING_CORD_Y * i+1));
		}
	}
}
