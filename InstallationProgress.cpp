#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>



void main()
{
 int gd=0,gm,i,x1,x2,y1,y2;
 clrscr();
 initgraph(&gd,&gm,"d:\\tc\\bgi");
 setbkcolor(WHITE);
 setcolor(RED);
 rectangle(0,218,625,242);
 x1=0;
 y1=220;
 x2=10;
 y2=240;
setfillstyle(1,GREEN);
 bar(x1,y1,x2,y2);
  outtextxy(100,100,"INSTALATION STARTS NOW");



 for(i=0;i<=600;i+=15)
 {
    settextstyle(1,0,5);
    setcolor(random(16));
    outtextxy(100,150,"SHAHUL & ZAIN");
    x1+=10;
    x2+=5;
    setfillstyle(1,BLACK);
    bar(x1,y1,x2,y2);
    x1+=5;
    x2+=10;
    setfillstyle(1,GREEN);
    bar(x1,y1,x2,y2);

    delay(100);
 }
   cleardevice();
    settextstyle(1,0,3);

   setbkcolor(YELLOW);
   setcolor(GREEN);
   outtextxy(200,220,"INSTALATION COMPLETE");
  getch();

}
