#include "Rook.h"
#include "ChessException.h"

Rook::Rook(int x, int y) : Piece(x, y) {}

void Rook::move(ChessBoard& board, int newX, int newY) {
    if (abs(newX - x) == abs(newY - y)) {
        x = newX;
        y = newY;
    } else {
        throw ChessException("Invalid move for Rook.");
    }
}
