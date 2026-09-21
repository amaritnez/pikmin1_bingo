#ifndef _BINGO_H
#define _BINGO_H

#include "Colour.h"
#include "Graphics.h"
#include "Section.h"
#include "system.h"
#include "types.h"


// Max number of bingo elements (basically card size)
#define MAX_NUM_CARDS 25
#define CARD_ROW_SIZE 5
#define CARD_COLUMN_SIZE 5
#define CARD_TEXT_START_CORD_X 100.0f
#define CARD_TEXT_START_CORD_Y 100.0f
#define CARD_TEXT_SPACING_CORD_X 20.0f
#define CARD_TEXT_SPACING_CORD_Y 20.0f

class BingoCore {

public:

    enum BingoChecks_Id {
        CHECK_DEBUG = 99,
    };

    BingoCore();


    void static drawDebugBingoText(Graphics& gfx);
    void drawBingoCard(Graphics& gfx);


private:
    BingoChecks_Id card[MAX_NUM_CARDS];


};

#endif
