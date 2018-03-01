#include "pos.h"

pos::pos()
{
}

pos::pos(int col_, int row_)
{
    col = col_;
    row = row_;
}

/*tuple<int,int> Pos::getPosition()
{
    tuple<int,int> position(col,row);

    return position;*/
}

int pos::getX()
{
    return col;
}

int pos::getY()
{
    return row;
}

void pos::setPosition(int col_, int row_)
{
    col = col_;
    row = row_;
}

void pos::setX(int x_)
{
    col = x_;
}

void pos::setY(int y_)
{
    row = y_;
}
