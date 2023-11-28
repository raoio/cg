#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
// Draw a line
line(100, 100, 300, 100);
// Draw a rectangle
rectangle(100, 150, 300, 250);
// Draw a circle
circle(200, 320, 40);
// Draw a polyline
int polyPoints[] = {100, 400, 150, 450, 200, 400, 250, 450, 300, 400};
drawpoly(5, polyPoints);
getch();
closegraph();
return 0;
}