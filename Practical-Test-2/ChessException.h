#pragma once
#include <stdexcept>

class ChessException : public std::runtime_error {
public:
    ChessException(const std::string& message);
};
