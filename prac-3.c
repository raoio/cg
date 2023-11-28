// smily
#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>
int main()
{
int gr = DETECT, gm;
initgraph(&gr, &gm, "C:\\Turboc3\\BGI");
setcolor(YELLOW);
circle(300, 100, 40);
setfillstyle(SOLID_FILL, YELLOW); // Set the fill style to solid fill
floodfill(300, 100, YELLOW); // Flood fill the circle
setcolor(BLACK); // Set the drawing color to black
setfillstyle(SOLID_FILL, BLACK);
fillellipse(310, 85, 2, 6); // Draw and fill an ellipse
fillellipse(290, 85, 2, 6);
// Draw an ellipse with specified parameters
ellipse(300, 100, 205, 335, 20, 9);
ellipse(300, 100, 205, 335, 20, 10);
ellipse(300, 100, 205, 335, 20, 11);
getch();
closegraph();
return 0;
}