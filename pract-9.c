#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
// Function to translate a rectangle by a given translation vector T void translateRectangle ( int P[][2], int T[])
{
int gd = DETECT, gm, errorcode;
initgraph (&gd, &gm, "C:\\Turboc3\\BGI");
setcolor (2);
rectangle(P[0][0],P[0][1],P[1][0],P[1][1]); //Originalrectangle
// Translate the rectangle by adding the translation vector to its coordinates
P[0][0] = P[0][0] + T[0]; P[0][1] = P[0][1] + T[1]; P[1][0] = P[1][0] + T[0]; P[1][1] = P[1][1] + T[1];
rectangle(P[0][0],P[0][1],P[1][0],P[1][1]); //Translatedrectangle
closegraph(); }
int main() {
int P[2][2] = {5, 8, 12, 18}; int T[] = {2, 1};
// Call the translation function translateRectangle (P, T);
return 0; }
