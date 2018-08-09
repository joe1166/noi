#include <iostream>

using namespace std;

int numof[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int n;
int a, b;
int c = 0;
int fnum = 0;

int count(int n, int a)
{
    if (a < 10)
    {
        return n - numof[a];
    }
    else if (a < 100)
    {
        return n - (numof[a / 10] + numof[a % 10]);
    }
    else if (a < 1000)
    {
        return n - (numof[a / 100] + numof[(a % 100) / 10] + numof[a % 10]);
    }
    else
    {
        return -1;
    }
}

int findb(int n)
{
    int bn = 0;
    for (int i = 0; i < 1000; i++)
    {
        b = i;
        bn = count(n, i);
        if (bn > 0)
        {
            c = a + b;
            bn = count(bn, c);
            if (bn == 0)
            {
                fnum++;
                //cout << a << " " << b << " " << c << endl;
            }
        }
    }
    return 0;
}

int finda(int n)
{
    int an = 0;
    for (int i = 0; i < 1000; i++)
    {
        a = i;
        an = count(n, i);
        if (an > 0)
            findb(an);
    }
    return 0;
}

int main(int argc, char const *argv[])
{

    cin >> n;
    n = n - 4;
    finda(n);

    cout << fnum;

    //system("PAUSE");
    return 0;
}
