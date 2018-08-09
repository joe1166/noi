#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

int a = 0, b = 0, c = 0;
double bj, cj;
int gw;
int d[10];
int ak, bk, ck;
bool found = false;

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
    cin >> ak >> bk >> ck;
    memset(d, 0, 10);

    for (int a = 123; a < 988; a++)
    {

        bj = a * bk / ak;
        cj = a * ck / ak;

        if (bj == (int)bj && cj == (int)cj)
        {
            b = bj;
            c = cj;
        }
        else
        {
            continue;
        }

        count(a);
        count(b);
        count(c);

        if (d[0] == 0 && d[1] == 1 && d[2] == 1 && d[3] == 1 && d[4] == 1 && d[5] == 1 && d[6] == 1 && d[7] == 1 && d[8] == 1 && d[9] == 1)
        {
            found = true;
            cout << a << " " << b << " " << c << endl;
        }
        for (int e = 0; e <= 9; e++)
        {
            d[e] = 0;
        }
    }

    if (!found)
    {
        cout << "No!!!";
    }

    //system("PAUSE");
    return 0;
}