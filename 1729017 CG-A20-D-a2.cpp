// 1729017 B. Anitya Aniruddha [LabExamAutumn 2020 || Set-D || (a)-2]
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    circle (200, 200, 100);
    rectangle (50, 197, 350, 203);
    rectangle (197, 50, 203, 350);
    getch();
    closegraph();
}
