// 1729017 B. Anitya Aniruddha [LabExamAutumn 2020 || Set-A || (a)-1]
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    circle (200, 200, 100);//round face
    setfillstyle (SOLID_FILL, WHITE);
    circle (160, 180, 5);//left eye
    floodfill (160, 180, 15);
    circle (240, 180, 5);//right eye
    floodfill (240, 180, 15);
    line (160, 220, 240, 220);//upper lips
    arc (200, 218, 185, 355, 40);//lower lips
    getch();
    closegraph();
}
