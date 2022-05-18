// 1729017 B. Anitya Aniruddha [LabExamSpring 2020 || Set-B || (a)-2]
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    rectangle (50, 100, 350, 300);//outer shape
    rectangle (70, 120, 330, 270);//inner shape
    circle (200, 285, 10);//logo
    rectangle (170, 300, 230, 320);//stand
    rectangle (130, 320, 270, 335);//floor
    getch();
    closegraph();
}
