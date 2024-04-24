#include "Tower.h"
#include "ChessException.h"

Tower::Tower(int x, int y) : Piece(x, y) {}

void Tower::move(ChessBoard& board, int newX, int newY) {
    if (newX == x || newY == y) {
        x = newX;
        y = newY;
    } else {
        throw ChessException("Invalid move for Rook.");
    }
}
