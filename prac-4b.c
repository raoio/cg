// bar graph
#include <conio.h>
#include <graphics.h>
#include <stdio.h>
int main() {
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
// Draw a vertical line from (100, 420) to (100, 60)
line(100, 420, 100, 60);
line(100, 420, 500, 420);
// Set the fill style to a pattern (LINE_FILL)
setfillstyle(LINE_FILL, RED);
// Draw a vertical bar from (150, 200) to (200, 419)
bar(150, 200, 200, 419);
setfillstyle(LINE_FILL, GREEN);
bar(225, 90, 275, 419);
setfillstyle(LINE_FILL, BLUE);
bar(300, 120, 350, 419);
setfillstyle(LINE_FILL, YELLOW);
bar(375, 180, 425, 419);
getch();
closegraph();
return 0;
}