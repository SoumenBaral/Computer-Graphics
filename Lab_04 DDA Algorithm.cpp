#DDA Algorithm in Coordinate system

#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
void lineDrawDDA(int cor,int Mx,int My, int x1, int y1,int x2,int y2)
{
    int x,y;
    float xf,yf;
    int cx= Mx/2,cy= My/2;
    int sx= 1, sy= 1;
    if(cor==1)
    {
    	sx = 1;
    	sy = -1;
	}
	else if(cor==2)
	{
		sx = -1;
    	sy = -1;	
	}
	else if(cor==3)
	{
		sx = -1;
    	sy = 1;	
	}
	else
	{
		sx = 1;
    	sy = 1;	
	}
    if(x1>x2 || y1>y2)
    {
        x1=x1+x2;
        x2=x1-x2;
        x1=x1-x2;

        y1=y1+y2;
        y2=y1-y2;
        y1=y1-y2;
    }

    float m=(y2-y1)/(x2-x1);
    int col = 12;
    if(m<=1)
    {
        x=x1;
        yf=y1;

        while(x<=x2)
        {
            int y=floor(yf+0.5);
            putpixel(cx+(sx*x),cy+(sy*y),col);

			delay(300);
			
            x++;
            yf=yf+m;
        }
    }
    else // m>1
    {
        y=y1;
        xf=x1;

        while(y<=y2)
        {
            int x=floor(xf+0.5);
            putpixel(cx+(sx*x),cy+(sy*y),col);

            delay(300);
            xf=xf+1.0/m;    
        }
    }
}

int main()
{
    int X,Y;
    initwindow(400,300,"Line Draw DDA");

    X=getmaxx(); //399
    Y=getmaxy(); //299

    line(0,Y/2,X,Y/2);
    line(X/2,0,X/2,Y);
    
    int x1,y1,x2,y2,c;
    
    cout<<"Enter the P1 and P2 point as (x1,y1) and (x2,y2): ";
    cin>>x1>>y1>>x2>>y2;
    
    cout<<"Enter the coordinate no: "; 
	cin>>c;
	
    //Validate coordinate number
    if(c < 1 || c > 4)
    {
        cout << "Invalid coordinate number! Using default (1st quadrant)" << endl;
        c = 3;
    }
    lineDrawDDA(c,X,Y,x1,y1,x2,y2);

    while(!kbhit())
    {

        delay(200);
    }

    return 0;
}

