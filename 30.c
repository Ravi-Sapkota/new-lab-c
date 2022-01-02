//30 Draw a simple face using graphic functions
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main(){
	int gd=DETECT, gm;
	initgraph(&gd,&gm,(char *)"");
	ellipse(200,100,0,360,50,75);
	circle(175,75,10);
	circle(225,75,10);
	line(175,175,225,225);
	getch();
	closegraph()
	return 0;
}
