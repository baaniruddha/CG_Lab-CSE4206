// 1729017 B. Anitya Aniruddha [LabExamAutumn 2020 || Set-E || (a)-2]
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    rectangle (240, 130, 300, 190);//water-tank
    line (260, 140, 260, 180);//|-2
    line (270, 140, 270, 180);//|-2
    line (280, 140, 280, 180);//|-3
    rectangle (140, 190, 420, 200);//roof-1
    rectangle (160, 200, 400, 230);//roof-2
    line (260, 215, 280, 215);//-
    line (160, 230, 160, 350);//house-left
    line (400, 230, 400, 350);//house-right
    rectangle (270, 230, 400, 300);//floor
    line (330, 265, 350, 265);//-
    line (240, 230, 240, 290);//|
    getch();
    closegraph();
}
