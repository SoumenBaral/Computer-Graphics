#include<iostream>
#include<graphics.h> 
#include<dos.h> 
using namespace std;  
void midPointCircle(int r, int X, int Y, int cor)  
{
	int x = 0, y=r, d;
	d = 1 - r;
	int h, k;
	
	while(x<=y)
	{
		if(cor==1){
			h= 3*X/4 , 
			k = Y/4;
			putpixel(x+h, y+k, 10);
			delay(20);
			putpixel(y+h, x+k, 10);
			delay(20);
			putpixel(-y+h, x+k, 10);
			delay(20);
			putpixel(-x+h, y+k, 10);
			delay(20);
			
			putpixel(-x+h, -y+k, 10);
			delay(20);
			putpixel(-y+h, -x+k, 10);
			delay(20);
			putpixel(y+h, -x+k, 10);
			delay(20);
			putpixel(x+h, -y+k, 10);
			delay(20);	
			}
		else if (cor==2)
		{
			h = X/4, 
			k = Y/4;
			putpixel(x+h, y+k, 10);
			delay(20);
			putpixel(y+h, x+k, 10);
			delay(20);
			putpixel(-y+h, x+k, 10);
			delay(20);
			putpixel(-x+h, y+k, 10);
			delay(20);
			
			putpixel(-x+h, -y+k, 10);
			delay(20);
			putpixel(-y+h, -x+k, 10);
			delay(20);
			putpixel(y+h, -x+k, 10);
			delay(20);
			putpixel(x+h, -y+k, 10);
			delay(20);	
		}
		else if (cor==3)
		{
			h = X/4, 
			k = 3*Y/4;
			putpixel(x+h, y+k, 10);
			delay(20);
			putpixel(y+h, x+k, 10);
			delay(20);
			putpixel(-y+h, x+k, 10);
			delay(20);
			putpixel(-x+h, y+k, 10);
			delay(20);
			
			putpixel(-x+h, -y+k, 10);
			delay(20);
			putpixel(-y+h, -x+k, 10);
			delay(20);
			putpixel(y+h, -x+k, 10);
			delay(20);
			putpixel(x+h, -y+k, 10);
			delay(20);	
		}
		else if(cor==4)
		{
			h = 3*X/4, 
			k = 3*Y/4;
			putpixel(x+h, y+k, 10);
			delay(20);
			putpixel(y+h, x+k, 10);
			delay(20);
			putpixel(-y+h, x+k, 10);
			delay(20);
			putpixel(-x+h, y+k, 10);
			delay(20);
			
			putpixel(-x+h, -y+k, 10);
			delay(20);
			putpixel(-y+h, -x+k, 10);
			delay(20);
			putpixel(y+h, -x+k, 10);
			delay(20);
			putpixel(x+h, -y+k, 10);
			delay(20);	
		}
			if(d<0)
			{
				d  = d + 2*x + 3;
			}
			else
			{
				d += 2*(x-y)+5;
				y--;
			}
			x++;
			
		}
}

int main()
{
    int X,Y,r;
    int c;
    initwindow(400,400,"Mid Point Circle");

    X=getmaxx();
    Y=getmaxy();

    line(0,Y/2,X,Y/2);
    line(X/2,0,X/2,Y);
    
    cout << "Enter the Radious: ";
    cin>>r;
    cout<<"Enter the Qwadrant Number (1~4): ";
    cin>>c;
	midPointCircle(r, X, Y, c);



    while(!kbhit())
        {
            delay(200);
        }

    return 0;
}
