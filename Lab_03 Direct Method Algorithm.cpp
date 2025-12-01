//Direct Method Line Drawing algorithm for scan-converting a line whose slope is between -45 degree and 45 degree (e.g., |m|< 1 or |m| == 1)

#include <graphics.h> 
#include <stdio.h> 
#include <math.h> 
#include <dos.h>

int lineDE(int x1, int y1, int x2, int y2){
	int x = x1;
	int y = y1;
	float x_f, m = (y2-y1)/(x2-x1);
	float b = (y-(m*x));
	
	while(y<y2){
		y++;
		x_f = (y-b)/m;//from y = mx + b
		x = floor(x_f + 0.5);
		delay(100);
		putpixel(x, y, 12);
	}
}

int main(){ 
	initwindow(400, 300, "Line Draw using Direct Equation"); 
	
	int X = getmaxx();//399
	int Y = getmaxy();//299
	
	lineDE(0, 50, 200, 250);	
	return 0;
}
