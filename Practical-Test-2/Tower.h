#pragma once
#include "Piece.h"

class Tower : public Piece {
public:
    Tower(int x, int y);
    void move(ChessBoard& board, int newX, int newY) override;
};
