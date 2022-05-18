// 1729017 B. Anitya Aniruddha [LabExamAutumn 2020 || Set-B || (a)-2]
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    rectangle (100, 130, 300, 250);//box shape
    circle (150, 170, 15);//head
    ellipse (150, 264, 30, 150, 30, 80);//body
    line (125, 223, 175, 223);//body-end
    rectangle (200, 155, 270, 160);//line-1
    rectangle (200, 175, 270, 180);//line-2
    rectangle (200, 195, 270, 200);//line-3
    rectangle (200, 215, 235, 220);//line-4
    getch();
    closegraph();
}
