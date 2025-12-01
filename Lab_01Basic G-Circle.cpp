#include <graphics.h> 
#include <stdio.h> 
#include <math.h> 
#include <dos.h>

int main(){ 
initwindow(400, 300, "My First Sample"); 
int x = getmaxx(); 
int y = getmaxy();
 
int X = x/2; 
int Y = y/2;

setcolor(YELLOW);

rectangle(0,0,x,y);

line(X, 0, X, y);
line(0, Y, x, Y);

circle(X, Y, 80);

circle(X+85, Y+85, 50);//4th
circle(X+85, Y-85, 50);//1st
circle(X-85, Y+85, 50);//3rd
circle(X-85, Y-85, 50);//2nd
	while(!kbhit()){
		delay(200);
	}	
return 0;
}
