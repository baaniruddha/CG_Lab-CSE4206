// 1729017 B. Anitya Aniruddha [LabExamSpring 2020 || Set-A || (a)-2]
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    circle (200, 200, 100);//round face
    circle (130, 150, 60);//left eyeglass
    circle (270, 150, 60);//right eyeglass
    ellipse (200, 125, 0, 180, 15, 7);//frame joint
    line (140, 170, 160, 170);//left eye
    line (240, 170, 260, 170);//right eye
    ellipse (200, 220, 180, 355, 30, 20);//lips
    ellipse (200, 220, 185, 355, 30, 21);
    ellipse (200, 220, 185, 355, 30, 22);
    getch();
    closegraph();
}
