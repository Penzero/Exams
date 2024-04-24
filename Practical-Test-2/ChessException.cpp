#include "ChessException.h"

ChessException::ChessException(const std::string& message) : std::runtime_error(message) {}
