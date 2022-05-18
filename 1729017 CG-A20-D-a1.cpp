// 1729017 B. Anitya Aniruddha [LabExamAutumn 2020 || Set-D || (a)-1]
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    circle (150, 200, 60);//wheel-1
    circle (250, 200, 15);//chain ring
    circle (350, 200, 60);//wheel-2
    line (150, 200, 235, 200);// wheel-1+chain ring
    line (200, 100, 150, 200);//seat-stay
    line (185, 70, 245, 185);//seat-tube
    line (160, 70, 215, 70);//seat
    line (300, 100, 255, 185);//down-tube
    line (285, 70, 350, 200);//font-fork
    line (285, 70, 310, 50);//handlebar
    getch();
    closegraph();
}

