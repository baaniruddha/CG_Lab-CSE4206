// 1729017 B. Anitya Aniruddha [LabExamAutumn 2020 || Set-B || (a)-1]
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    rectangle (100, 120, 350, 250);//box shape
    circle (150, 185, 30);//left outer circle
    circle (150, 185, 20);//left inner circle
    circle (300, 185, 30);//right outer circle
    circle (300, 185, 20);//right outer circle
    rectangle (190, 90, 260, 120);//handle
    line (190, 155, 260, 155);//upper line
    line (190, 156, 260, 156);
    line (190, 157, 260, 157);
    line (190, 158, 260, 158);
    rectangle (190, 170, 260, 200);//Cassette-player
    line (190, 215, 260, 215);//lower line
    line (190, 216, 260, 216);
    line (190, 217, 260, 217);
    line (190, 218, 260, 218);
    getch();
    closegraph();
}
