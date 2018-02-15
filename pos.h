#ifndef POS_H
#define POS_H

class Pos
{
private:

    int row;  //y axis
    int col;  //x axis

public:
    Pos();
    Pos(int col_, int row_);
    Pos getPosition();
    int getX();
    int getY();
    void setPosition(int col_, int row_);
    void setX(int x_);
    void setY(int y_);
};

#endif // POS_H

//////////// REFERENCE SYSTEM ////////////
/*
 |---------> X
 | |\|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-
 | |-|\|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-
 v |-|-|\|-|-|-|-|-|-|-|-|-|-|-|-|-|-
 Y |-|-|-|\|-|-|-|-|-|-|-|-|-|-|-|-|-
   |-|-|-|-|\|-|-|-|-|-|-|-|-|-|-|-|-
   |-|-|-|-|-|0 (X,Y)|-|-|-|-|-|-|-|-
   |-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-
   |-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-
   |-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-
*/
