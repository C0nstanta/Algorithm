#include "figure.hpp"
#include "chessboard.hpp"



Color Piece::getColor() const
{
   return _color;
}

PieceType Piece::getPieceType() const
{
   return _piece_type;
}



void Piece::setPos(const char& x, const char& y)
{
   _pos = std::make_pair(x, y);
}

std::pair<char, char>& Piece::getPos()
{
   return _pos;
}
