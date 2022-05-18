// 1729017 B. Anitya Aniruddha [LabExamAutumn 2020 || Set-A || (a)-3]
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    rectangle (50, 100, 350, 300);//outer shape
    rectangle (70, 120, 330, 270);//inner shape
    circle (200, 285, 10);//logo
    rectangle (170, 300, 230, 320);//stand
    ellipse (200, 325, 180, 180, 70, 5);//floor
    getch();
    closegraph();
}
