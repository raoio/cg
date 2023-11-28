#include <graphics.h>
#include <math.h>
#include <conio.h>
void main() {
int x0, y0, x1, y1, i = 0;
float delx, dely, len, x, y;
int gr = DETECT, gm;
initgraph(&gr, &gm, "C:\\Turboc3\\BGI");
printf("Please enter the starting coordinate of x, y = ");
scanf("%d %d", &x0, &y0); // Input starting coordinates
printf("Enter the final coordinate of x, y = ");
scanf("%d %d", &x1, &y1); // Input ending coordinates
dely = abs(y1 - y0); // Calculate absolute y-difference
delx = abs(x1 - x0); // Calculate absolute x-difference
// Choose the longer dimension as the length
if (delx < dely) {
len = dely;
}
else {
len = delx;
}
delx = (x1 - x0) / len; // Calculate x-increment per step
dely = (y1 - y0) / len; // Calculate y-increment per step
x = x0 + 0.5; // Initialize x with a small offset for accuracy
y = y0 + 0.5; // Initialize y with a small offset for accuracy
do {
putpixel(x, y, 3);
x = x + delx;
y = y + dely;
i++;
delay(30);
}
while (i <= len);
getch();
closegraph();
return 0;
}