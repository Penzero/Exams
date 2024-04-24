#include "Pawn.h"
#include "ChessException.h"
#include <exception>


Pawn::Pawn(int x, int y) : Piece(x, y)
{
}

void Pawn::move(ChessBoard& board, int newX, int newY)
{
    // Pawn can move forward by 1 step; no capture logic, just basic movement
        if ((newX == x) && (newY == y + 1)) {
            y = newY;
        } else {
            throw ChessException("Invalid move for Pawn.");
        }
}