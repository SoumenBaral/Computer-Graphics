#include<iostream>
#include<graphics.h>
#include<dos.h>
using namespace std;
 
void bresenhamCircle(int r, int X, int Y, int cor)
{
	int x = 0;
	int y = r;
	int d = 3-2*r;
	int color = 1;
	
	//int h = X/2;
	//int k = Y/2;
	while(x<y)
	{
		if(cor == 1){
			int h = 3*X/4;
			int k = Y/4;
			
			putpixel(x+h, y+k, color);
			color = color>16? 1: color++;
			delay(50);
			putpixel(y+h, x+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(x+h, y+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(-y+h, x+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(-x+h, y+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(-x+h, -y+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(-y+h, -x+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(y+h, -x+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(x+h, -y+k, 15);
			color = color>16? 1: color++;
			delay(50);
		}
		else if(cor == 2){
			int h = X/4;
			int k = Y/4;
			
			putpixel(x+h, y+k, color);
			color = color>16? 1: color++;
			delay(50);
			putpixel(y+h, x+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(x+h, y+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(-y+h, x+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(-x+h, y+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(-x+h, -y+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(-y+h, -x+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(y+h, -x+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(x+h, -y+k, 15);
			color = color>16? 1: color++;
			delay(50);
		}
		else if(cor == 3){
			int h = X/4;
			int k = 3*Y/4;
			
			putpixel(x+h, y+k, color);
			color = color>16? 1: color++;
			delay(50);
			putpixel(y+h, x+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(x+h, y+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(-y+h, x+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(-x+h, y+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(-x+h, -y+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(-y+h, -x+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(y+h, -x+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(x+h, -y+k, 15);
			color = color>16? 1: color++;
			delay(50);
		}
		else if(cor == 4){
			int h = 3*X/4;
			int k = 3*Y/4;
			
			putpixel(x+h, y+k, color);
			color = color>16? 1: color++;
			delay(50);
			putpixel(y+h, x+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(x+h, y+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(-y+h, x+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(-x+h, y+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(-x+h, -y+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(-y+h, -x+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(y+h, -x+k, 15);
			color = color>16? 1: color++;
			delay(50);
			putpixel(x+h, -y+k, 15);
			color = color>16? 1: color++;
			delay(50);
		}
		if(d<0)
		{
			d = d + 4*x + 6;
		}
		else
		{
			d = d + 4*(x - y) + 10;
			y--;
		}
		x++;	
	}	
}

int main()
{
    int X, Y, r, c;
    initwindow(400, 400,"Bresenham's 'Circle");

    X=getmaxx();
    Y=getmaxy();

    line(0,Y/2,X,Y/2);
    line(X/2,0,X/2,Y);
    
    cout << "Enter the Radious: ";
    cin>>r;
    cout<<"Enter the Qwadrant Number (1~4): ";
    cin>>c;
	bresenhamCircle(r, X, Y, c);


    while(!kbhit())
        {
            delay(200);
        }

    return 0;
}
