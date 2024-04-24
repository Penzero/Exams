#pragma once
#include "ChessBoard.h"

class Piece {
protected:
    int x, y;

public:
    Piece(int x, int y);
    virtual ~Piece();
    virtual void move(ChessBoard& board, int newX, int newY) = 0;
    int getX() const;
    int getY() const;
};
