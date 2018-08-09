#include <stdio.h>
#include <iostream>
using namespace std;

int a = 0, b = 0, c = 0;
int gw;
int d[10];

void count(int x)
{
    while (x != 0)
    {
        gw = x % 10;
        x = (x - gw) / 10;
        d[gw]++;
    }
}

int main()
{

    for (int a = 134; a < 329; a++)
    {

        b = a * 2;
        c = a * 3;

        count(a);
        count(b);
        count(c);

        if (d[1] == 1 && d[2] == 1 && d[3] == 1 && d[4] == 1 && d[5] == 1 && d[6] == 1 && d[7] == 1 && d[8] == 1 && d[9] == 1)
        {
            cout << a << " " << b << " " << c << endl;
        }
        for (int e = 1; e <= 9; e++)
        {
            d[e] = 0;
        }
    }
    return 0;
}