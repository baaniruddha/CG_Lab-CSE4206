// 1729017 B. Anitya Aniruddha [LabExamAutumn 2020 || Set-C || (a)-2]
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    //upper box
    line (160, 140, 125, 225);/*/*/
    line (255, 140, 290, 225);//\*/
    line (160, 140, 195, 140);//-1
    line (255, 140, 220, 140);//-2
    //arrow
    line (208, 100, 208, 210);//line
    line (180, 170, 208, 210);//a+j-1
    line (235, 170, 208, 210);//a+j-2
    //lower box
    line (125, 225, 175, 225);//l-1
    line (240, 225, 290, 225);//l-2
    line (190, 245, 225, 245);//down
    line (175, 225, 190, 245);//d+j-1
    line (240, 225, 225, 245);//d+j-2
    line (125, 225, 125, 275);//||-1
    line (290, 225, 290, 275);//||-2
    line (125, 275, 290, 275);//-
    getch();
    closegraph();
}
