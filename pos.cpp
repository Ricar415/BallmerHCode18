#include "pos.h"

Pos::Pos()
{
}

Pos::Pos(int col_, int row_)
{
    col = col_;
    row = row_;
}

tuple<int,int> Pos::getPosition()
{
    tuple<int,int> position(col,row);

    return position;
}

int Pos::getX()
{
    return col;
}

int Pos::getY()
{
    return row;
}

void Pos::setPosition(int col_, int row_)
{
    col = col_;
    row = row_;
}

void Pos::setX(int x_)
{
    col = x_;
}

void Pos::setY(int y_)
{
    row = y_;
}
