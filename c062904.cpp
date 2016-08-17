// -> http://www11.atwiki.jp/kenichiro/pages/32.html
#include <stdio.h>
using namespace std;

void euler(double&, double&, double, double);

main()
{
    double x, v, f, h, t, tend;
    int step;
    
    x = 1.0;
    v = 0.0;
    f = 0;
    tend = 100;
    h = 0.1;
    
    step = (int)(tend / h);
    
    for(int i = 0; i < step; i++)
    {
        euler(x, v, f, h);
        printf("t=%f,", t);
        printf("x=%f", x);
        printf("\n");
        t += h;
    }
}

void euler(double &x, double &v, double f, double h)
{
    double dx, dv;
    
    dx = v;
    dv = -f * v * (x * x - 1) - x;
    
    x = x + h * dx;
    v = v + h * dv;
}

// g++ c062904.cpp libglibw32-3.a -IC:\mingw-jp-20040217\include\ -LC:\mingw-jp-20040217\lib\ -IC:\Glibw32\ -LC:\Glibw32\ -luser
// 32 -lgdi32 // ->2016.8.17Added.
// rename a.exe c062904.*
// c062904.exe > c062904.txt
