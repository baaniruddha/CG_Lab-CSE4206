// 1729017 B. Anitya Aniruddha [LabExamSpring 2020 || Set-A || (a)-4]
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    circle (200, 200, 100);//round face
    ellipse (180, 170, 180, 180, 15, 25);//left eye
    ellipse (220, 170, 180, 180, 15, 25);//right eye
    setfillstyle (SOLID_FILL, WHITE);
    ellipse (190, 175, 190, 180, 5, 9);//left eye-ball
    floodfill (190, 175, 15);
    ellipse (210, 175, 190, 180, 5, 9);//right eye-ball
    floodfill (210, 175, 15);
    line (180, 130, 195, 155);//left eyebrow
    line (220, 130, 205, 155);//right eyebrow
    ellipse (200, 240, 0, 180, 30, 25);//lips
    ellipse (200, 270, 180, 355, 12, 5);//neck
    getch();
    closegraph();
}

