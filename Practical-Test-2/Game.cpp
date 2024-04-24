#include "Game.h"
#include "Pawn.h"
#include "Rook.h"
#include "Tower.h"
#include "ChessException.h"
#include <iostream>
#include <cassert>

Game::Game() : board(8, 8) {
    pieces.push_back(new Pawn(1, 2));
    pieces.push_back(new Rook(0, 0));
    pieces.push_back(new Tower(0, 0));
}

Game::~Game() {
    for (auto p : pieces) {
        delete p;
    }
    pieces.clear();
}

void Game::simulate() {
    try {
        pieces[0]->move(board, 1, 3);
        checkAndRemove(0);
        pieces[1]->move(board, 2, 2);
        checkAndRemove(1);
        pieces[2]->move(board, 0, 5);
        checkAndRemove(2);

    } catch (const ChessException& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    assert(pieces.size() == 3);
    assert(pieces[0]->getX() == 1 && pieces[0]->getY() == 3);
    assert(pieces[1]->getX() == 2 && pieces[1]->getY() == 2);
    assert(pieces[2]->getX() == 0 && pieces[2]->getY() == 5);
}

void Game::checkAndRemove(int movedPieceIndex) {
    Piece* movedPiece = pieces[movedPieceIndex];
    for (int i = 0; i < pieces.size(); ++i) {
        if (i != movedPieceIndex) {
            Piece* otherPiece = pieces[i];
            if (movedPiece->getX() == otherPiece->getX() && movedPiece->getY() == otherPiece->getY()) {
                delete otherPiece;
                pieces.erase(pieces.begin() + i);

                if (i < movedPieceIndex) {
                    movedPieceIndex--;
                }
                break;
            }
        }
    }
}
