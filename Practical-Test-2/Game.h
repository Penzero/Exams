#pragma once
#include <vector>
#include "Piece.h"
#include "ChessBoard.h"

class Game {
    ChessBoard board;
    std::vector<Piece*> pieces;

public:
    Game();
    ~Game();
    void simulate();

private:
    void checkAndRemove(int);
};
