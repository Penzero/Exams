#include "Piece.h"

Piece::Piece(int x, int y) : x(x), y(y) {}

Piece::~Piece() {}

int Piece::getX() const { return x; }
int Piece::getY() const { return y; }
