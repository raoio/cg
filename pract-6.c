#include <graphics.h> 
#include <stdio.h> 
#include <conio.h>
int main() {
int x1, y1, x2, y2, dx, dy, sx, sy, err, e2;
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
printf("Enter the coordinates of the first point (x1 y1): "); scanf("%d %d", &x1, &y1);
printf("Enter the coordinates of the second point (x2 y2): "); scanf("%d %d", &x2, &y2);
dx = abs(x2 - x1); dy = abs(y2 - y1);
               if(x1<x2) sx=1;
else sx=-1;
if(y1<y2) sy=1;
else sy=-1;
err = dx - dy;
while (1) {
putpixel(x1, y1, WHITE);
if(x1==x2&&y1==y2){ break;
}
e2 = 2 * err;
if(e2>-dy){ err=err-dy;
// Initialize error term
// Calculate double the error term
     
x1=x1+sx; }
if(e2<dx){ err=err+dx; y1=y1+sy;
} }
getch(); closegraph();
return 0; }