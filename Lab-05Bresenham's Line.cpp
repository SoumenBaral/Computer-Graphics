//take two points P1(1, 1) and P2(10, 5) -> User input,  and draw line using Bresenham's Algorithm and show drawn line any of Quadrants
//Lab Report on 03/10/2025
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
 
using namespace std;

int bresenhamLine(int cor, int x1, int y1, int x2, int y2, int X, int Y){
	//variable declaration m<1
	int dx, dy, inc1, inc2, d;
	dx = x2-x1;
	dy = y2-y1;
	d = 2*dy-dx; //ddecision varaible
	inc1 = 2*dy;
	inc2 = 2*(dy-dx);
	while(x1<=x2){
		putpixel(x1,y1,12);
		
		if(d<=0){
			d = d +inc1;
		}
		else{
			d = d+inc2;
			y1++;
		}
		x1++;
	}
}

int main()
{
    int X,Y;
    initwindow(400,300,"Bresenham Line");

    X=getmaxx(); //399
    Y=getmaxy(); //299

    line(0,Y/2,X,Y/2);
    line(X/2,0,X/2,Y);
    
    int cor = 1;
    bresenhamLine(cor, 1, 1, 100, 60, X, Y);

    while(!kbhit())
    {

        delay(200);
    }

    return 0;
}
................................................

#include<iostream>
#include<graphics.h>
#include<dos.h>
using namespace std;

void bresenhamline(int x1, int y1, int x2, int y2, int X, int Y)
{
    int dx, dy, inc1, inc2, d;
    float m;
    int color=1;

    m=(y2-y1)/(x2-x1);

    if(m<=1)
    {
        dx= x2-x1;
        dy= y2-y1;
        d= 2*dy-dx;
        inc1= 2*dy;
        inc2= 2*(dy-dx);

        while(x1<=x2)
        {
            putpixel((X/2)+x1,(Y/2)-y1,color++); //1st quadrant
            putpixel((X/2)-x1,(Y/2)-y1,color++); //2nd quadrant
			putpixel((X/2)-x1,(Y/2)+y1,color++); //3rd quadrant
            putpixel((X/2)+x1,(Y/2)+y1,color++); //4th quadrant
            delay(100);

            if(color>15)
                color=1;

            if(d<=0)
                d=d+inc1;
            else
            {
                d=d+inc2;
                y1++;
            }
            x1++;
        }
    }
    else
    {
        dx=x2-x1;
        dy=y2-y1;
        d=2*dx-dy;
        inc1=2*dx;
        inc2=2*(dx-dy);

        while(y1<=y2)
        {
            putpixel((X/2)+x1,(Y/2)-y1,color++); //1st quadrant
			putpixel((X/2)-x1,(Y/2)-y1,color++); //2nd quadrant
			putpixel((X/2)-x1,(Y/2)+y1,color++); //3rd quadrant
            putpixel((X/2)+x1,(Y/2)+y1,color++); //4th quadrant 
            
            delay(100);
            if(color>15)
                color=1;

            if(d<0)
            {
                d=d+inc1;
            }
            else
            {
                x1=x1+1;
                d=d+inc2;
            }
            y1=y1+1;
        }

    }

}

int main()
{
    int X,Y;
    int x1, y1, x2, y2;
    initwindow(400,400,"bresenhamline");

    X=getmaxx();
    Y=getmaxy();

    line(0,Y/2,X,Y/2);
    line(X/2,0,X/2,Y);
    
    cout<<"Enter coordinates of Point 1 (x1, y1): ";
    cin>>x1>>y1;
    cout<<"Enter coordinates of Point 2 (x2, y2): ";
    cin>>x2>>y2;
    
    /*cout<<"Enter number of Quadrant (1-4): ";
    cin>>qua;*/
    
    /*if(quadrant > 4 || quadrant < 1){
    	cout<<"Invalid Quadrant! Default Quadrant is 1" <<endl;
    	quadrant = 1;
	}*/
	
	bresenhamline(x1, y1, x2, y2, X, Y);
    //bresenhamline(1, 1, 100, 60, X, Y);


    while(!kbhit())
    {
        delay(200);
    }

    return 0;
}
