#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
// Initialize graphics driver and mode variables
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
int x = 100; // Set x-coordinate
int y = 200; // Set y-coordinate
int color = RED; // Set color
// Put a pixel at the specified coordinates
putpixel(x, y, color);
getch();
closegraph();
return 0;
}