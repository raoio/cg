#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void flood(int x, int y, int new_col, int old_col) { // check current pixel is old_color or not 
if (getpixel(x, y) == old_col) {
putpixel(x, y, new_col);
flood(x + 1, y, new_col, old_col); flood(x - 1, y, new_col, old_col); flood(x, y + 1, new_col, old_col); flood(x, y - 1, new_col, old_col);
} }
int main() {
int gd, gm = DETECT;
initgraph(&gd, &gm, ""); int top, left, bottom, right;
top=left=50;
bottom = right = 300; rectangle(left, top, right, bottom);
intx=51; inty=51;
int newcolor = 12; int oldcolor = 0;
flood(x, y, newcolor, oldcolor); getch();
return 0; }
