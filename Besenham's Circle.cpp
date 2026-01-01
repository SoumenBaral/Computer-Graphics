#include<iostream>
#include<graphics.h>
#include<dos.h>  
using namespace std;  
 
void bresenhamCircle(int r, int X, int Y)
{
	int x = 0;
	int y = r;
	int d = 3 - 2*r;
	int color = 11;
	
	int h = X/2;
	int k = Y/2;
	
	while(x<y)
	{
		putpixel(x+h, y+k, color);
		color = color>16? 1: color++;
		delay(50);
		
		putpixel(y+h, x+k, 11);
		color = color>16? 1: color++;
		delay(50);
		
		putpixel(x+h, y+k, 11);
		color = color>16? 1: color++;
		delay(50);
		
		putpixel(-y+h, x+k, 11);
		color = color>16? 1: color++;
		delay(50);
		
		putpixel(-x+h, y+k, 11);
		color = color>16? 1: color++;
		delay(50);
		
		putpixel(-x+h, -y+k, 11);
		color = color>16? 1: color++;
		delay(50);
		
		putpixel(-y+h, -x+k, 11);
		color = color>16? 1: color++;
		delay(50);
		
		putpixel(y+h, -x+k, 11);
		color = color>16? 1: color++;
		delay(50);
		
		putpixel(x+h, -y+k, 11);
		color = color>16? 1: color++;
		delay(50);
		
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
    int X,Y;
    initwindow(400,400,"Bresenham's Circle Drawing'");

    X=getmaxx();
    Y=getmaxy();

    line(0,Y/2,X,Y/2);
    line(X/2,0,X/2,Y);
    int r, cor;

    cout<<"Enter Redius :";
    cin>>r;
    bresenhamCircle(r, X, Y);
    

    while(!kbhit())
        {
            delay(200);
        }

    return 0;
}
