#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>

// Implementing Mid-Point Circle Drawing Algorithm
void midPointCircleDraw(int x_c, int y_c, int r, int c)
{
 int x,y,p;
 x=0;y=r;
 putpixel(x_c,y_c,15); delay(50);
 putpixel(x+x_c,y+y_c,c);
 putpixel(x+x_c,-y+y_c,c);
 putpixel(y+x_c,x+y_c,c);
 putpixel(-y+x_c,x+y_c,c);
 p=1-r;
 while(x<y)
 {
  if(p<0) p=p+2*x+2+1;
  else
  {
   p=p+2*x+2+1-2*y-2;
   y=y-1;
  }
  x=x+1;
//  delay(100);
  putpixel(x+x_c,y+y_c,c+1);    delay(10);
  putpixel(x+x_c,-y+y_c,c+2);   delay(10);
  putpixel(-x+x_c,y+y_c,c+3);   delay(10);
  putpixel(-x+x_c,-y+y_c,c+4);  delay(10);
  putpixel(y+x_c,x+y_c,c+5);    delay(10);
  putpixel(y+x_c,-x+y_c,c+6);   delay(10);
  putpixel(-y+x_c,x+y_c,c+7);   delay(10);
  putpixel(-y+x_c,-x+y_c,c+8);  delay(10);
 }
}

// Driver code
void main()
{
    int gd=DETECT,gm,r,x_c,y_c,i,j,c1=1,c2=0;
    char ch;
//    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    printf("\nEnter the co-ordinate of Centre of Circle::");
    scanf("%d%d",&x_c,&y_c);
    printf("\nEnter the radius of the circle::");
    scanf("%d",&r);
    // To draw a circle of radius r centred at (x_c, y_c)

    midPointCircleDraw(x_c,y_c,r,2);
    getch();
    closegraph();
}
//    midPointCircleDraw(x_c+r,y_c,r,2);
//    midPointCircleDraw(x_c-r,y_c,r,3);
//    midPointCircleDraw(x_c,y_c+r,r,4);
//    midPointCircleDraw(x_c,y_c-r,r,5);
/*    x_c=320;y_c=240; r=5;
    printf("Press enter to start the program...\n");
    printf("Press 0 to stop...");
    do
    {
     ch=getche();
     for(i=1,j=0;i<240;i=i+5,j++)
     {
      if(ch=='0') break;
      midPointCircleDraw(x_c,y_c,r+i,j+c1);
      midPointCircleDraw(x_c,y_c,i,c2); delay(10);
      midPointCircleDraw(x_c,y_c,i,j+c1);
     }
     if(ch=='0') break;
    } while(1);
    getch();
    closegraph();
} */
