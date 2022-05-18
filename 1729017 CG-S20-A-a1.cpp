// 1729017 B. Anitya Aniruddha [LabExamSpring 2020 || Set-A || (a)-1]
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    circle (200, 200, 100);//round face
    ellipse (170, 170, 0, 180, 15, 5);//left eye
    ellipse (170, 170, 0, 180, 15, 6);
    ellipse (170, 170, 0, 180, 15, 7);
    ellipse (170, 170, 0, 180, 15, 8);
    ellipse (170, 170, 0, 180, 15, 9);
    ellipse (170, 170, 0, 180, 15, 10);
    setfillstyle (SOLID_FILL, WHITE);
    ellipse (230, 170, 180, 180, 15, 25);//right eye
    floodfill (240, 170, 15);
    ellipse (200, 200, 185, 320, 60, 60);//lips
    ellipse (200, 200, 185, 320, 60, 61);
    ellipse (200, 200, 185, 320, 60, 62);
    ellipse (200, 200, 185, 320, 60, 63);
    ellipse (200, 200, 185, 320, 60, 64);
    ellipse (200, 200, 185, 320, 60, 65);
    ellipse (200, 200, 185, 320, 60, 66);
    ellipse (200, 200, 185, 320, 60, 67);
    ellipse (200, 200, 185, 320, 60, 68);
    getch();
    closegraph();
}
