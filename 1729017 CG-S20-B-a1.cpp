// 1729017 B. Anitya Aniruddha [LabExamSpring 2020 || Set-B || (a)-1]
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    //3-line house
    line (150, 150, 150, 350);//left
    line (150, 350, 400, 350);//middle
    line (400, 150, 400, 350);//right
    //roof
    line (270, 70, 120, 170);//left inner side
    line (270, 55, 110, 160);//left outer side
    line (110, 160, 120, 170);//left joint
    line (270, 70, 430, 170);//right inner side
    line (270, 55, 440, 160);//right outer side
    line (440, 160, 430, 170);//right joint
    //chimney
    line (340, 70, 340, 97);
    line (360, 70, 360, 110);
    rectangle (338, 65, 362, 70);
    //window & door
    rectangle (250, 180, 300, 230);//middle window
    line (250, 205, 300, 205);
    line (275, 180, 275, 230);
    rectangle (170, 250, 220, 300);//left window
    line (170, 275, 220, 275);
    line (195, 250, 195, 300);
    rectangle (330, 250, 380, 300);//right window
    line (330, 275, 380, 275);
    line (355, 250, 355, 300);
    rectangle (250, 260, 300, 350);//door
    circle (260, 305, 6);//door lock
    getch();
    closegraph();
}
