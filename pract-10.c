#include <graphics.h> 
#include <stdio.h> 
#include <math.h>
// Function to rotate a point (x, y) about the origin in clockwise direction 
void rotatePoint(int &x, int &y, float angle)
{
float radianAngle = (angle * M_PI) / 180.0;
int newX = (int)(x * cos(radianAngle) - y * sin(radianAngle)); int newY = (int)(x * sin(radianAngle) + y * cos(radianAngle)); x = newX;
y = newY;
}
int main() {
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
int x = 100, y = 50; // Coordinates of the original point
putpixel(x, y, WHITE);
float angle = 45.0; // Rotation angle in degrees (clockwise)
// Rotate the point rotatePoint(x, y, angle); putpixel(x, y, RED);
getch(); 
closegraph();
return 0; }