// 1729017 B. Anitya Aniruddha [LabExamAutumn 2020 || Set-A || (a)-2]
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    arc (200, 200, 30, 150, 80);//signal-1
    arc (200, 201, 31, 149, 79);
    arc (200, 202, 32, 148, 78);
    arc (200, 203, 33, 147, 77);

    arc (200, 220, 40, 140, 63);//signal-2
    arc (200, 221, 41, 139, 62);
    arc (200, 222, 42, 138, 61);
    arc (200, 223, 43, 137, 60);

    arc (200, 240, 50, 130, 50);//signal-3
    arc (200, 241, 51, 129, 49);
    arc (200, 242, 52, 128, 48);
    arc (200, 243, 53, 127, 47);
    setfillstyle (SOLID_FILL, WHITE);
    circle (200, 230, 10);//signal-0
    floodfill (200, 230, 15);
    getch();
    closegraph();
}

