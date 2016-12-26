# c062901
// -> External reference http://www11.atwiki.jp/kenichiro/pages/32.html
#include <stdio.h>
#include "glibw32.h"
using namespace std;

const int N = 50;
void euler(double&, double&, double, double);

main()
{
    ginit(500, 500, WHITE);
    GRAPH g;
    g.window(0, -N, 2 * N, N);
    g.line(0, 0, 2 * N, 0);
    g.line(0, N, 0, -N);
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
        g.pset(t, x);
        t += h;
    }
    gend();
}

void euler(double &x, double &v, double f, double h)
{
    double dx, dv;
    
    dx = v;
    dv = -f * v * (x * x - 1) - x;
    
    x = x + h * dx;
    v = v + h * dv;
}

// g++ c062906.cpp libglibw32-3.a -IC:\mingw-jp-20040217\include\ -LC:\mingw-jp-20040217\lib\ -IC:\Glibw32\ -LC:\Glibw32\ -luser
// 32 -lgdi32
// rename a.exe c062906.*
// c062906.exe
