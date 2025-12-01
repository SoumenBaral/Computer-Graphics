#include <graphics.h> 
#include <stdio.h> 
#include <math.h> 
#include <dos.h>

int main(){ 
initwindow(400, 300, "Test"); 
int x = getmaxx(); 
int y = getmaxy();
 
int X = x/2; 
int Y = y/2;

setcolor(YELLOW);

rectangle(5, 5, x-5, y-5);
line(10, 5, 10, y-5);
line(x-10, 5, x-10, y-5);
line(10, Y, X-10, y/2);
line(x+10, Y, X, y/2);

circle(X, Y, 10);


//line(0, Y, x, Y);



	while(!kbhit()){
		delay(200);
	}	
return 0;
}
