#include <graphics.h>
#include <conio.h>
#include <math.h>
void drawRectangle(int x1, int y1, int x2, int y2) { rectangle(x1, y1, x2, y2);
}
// Function to scale an object to double its size 
void scaleObject(int &x, int &y, float scaleFactor) {
x = x * scaleFactor;
y = y * scaleFactor; }
int main() {
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); intx1=100,y1=100,x2=200,y2=200;
drawRectangle(x1, y1, x2, y2);
float scaleFactor = 2.0; // Scaling factor for doubling the size
scaleObject(x1, y1, scaleFactor); scaleObject(x2, y2, scaleFactor); setcolor(RED); drawRectangle(x1, y1, x2, y2);
getch(); closegraph();
return 0; }
