//29 Write a C program to draw a triangle using line() graphic function
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main(){
	int gd=DETECT, gm;
	initgraph(&gd,&gm,(char *)"");
	line(150,150,200,200);
	line(150,150,100,200);
	line(100,200,200,200);
	getch();
	closegraph()
	return 0;
}
