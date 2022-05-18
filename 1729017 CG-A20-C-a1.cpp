// 1729017 B. Anitya Aniruddha [LabExamAutumn 2020 || Set-C || (a)-1]
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    rectangle (150, 130, 295, 420);//box shape
    rectangle (260, 90, 270, 130);//antenna
    arc (250, 90, 90, 270, 15);//left signal-1
    arc (235, 90, 90, 270, 15);//left signal-2
    arc (280, 90, 270, 90, 15);//left signal-1
    arc (295, 90, 270, 90, 15);//left signal-2
    rectangle (165, 145, 280, 250);//screen
    rectangle (165, 275, 190, 295);//digit-1
    rectangle (210, 275, 235, 295);//digit-2
    rectangle (255, 275, 280, 295);//digit-3
    rectangle (165, 308, 190, 328);//digit-4
    rectangle (210, 308, 235, 328);//digit-5
    rectangle (255, 308, 280, 328);//digit-6
    rectangle (165, 341, 190, 361);//digit-7
    rectangle (210, 341, 235, 361);//digit-8
    rectangle (255, 341, 280, 361);//digit-9
    rectangle (165, 374, 190, 394);//*
    rectangle (210, 374, 235, 394);//digit-0
    rectangle (255, 374, 280, 394);//#
    getch();
    closegraph();
}

