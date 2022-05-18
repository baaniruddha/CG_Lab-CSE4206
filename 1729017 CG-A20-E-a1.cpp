// 1729017 B. Anitya Aniruddha [LabExamAutumn 2020 || Set-E || (a)-1]
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    rectangle (150, 230, 400, 350);//house
    rectangle (160, 190, 390, 210);//roof-1
    rectangle (130, 210, 430, 230);//roof-2
    rectangle (170, 250, 220, 300);//left window
    rectangle (330, 250, 380, 300);//right window
    rectangle (250, 270, 300, 350);//door
    getch();
    closegraph();
}
