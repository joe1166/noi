#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int n;
int k;

int sscount = 0;

int sushu(int n)
{
    //cout << n << endl;
    for (int j = 2; j <= sqrt(double(n)); j++)
    {
        if (n % j == 0)
        {
            return 0;
        }
    }
    sscount++;
    return 1;
}

int choose(int n, int k, int sum, long long x[])
{
    int sumleft;
    int kleft;
    int nleft;
    for (int i = n - 1; i >= 0; i--)
    {
        sumleft = sum + x[i];
        kleft = k - 1;
        nleft = i;
        //cout << kleft << "." << nleft << endl;
        if (kleft == 0)
        {
            //cout << sum << "." << sumleft << endl;
            sushu(sumleft);
            continue;
        }
        if (nleft < kleft)
        {
            return 0;
        }
        choose(nleft, kleft, sumleft, x);
    }
}

int main(int argc, char const *argv[])
{
    cin >> n >> k;

    long long x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    choose(n, k, 0, x);

    cout << sscount;

    //system("PAUSE");
    return 0;
}
