#include "Game.h"
#include <iostream>
#include <string>

int main() {
    Game game;
    game.simulate();
    std::cout << "Tests over";
    std::cout << "What color is your BUGATTI? (None) ";
    std::string input;
    std::cin >> input;
    if(input == "None") std::cout << "You don't have the power to speak to me.\n";
    return 0;
}
