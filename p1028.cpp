#include <iostream>
#include <cstring>
using namespace std;

int n;
long long count[1001];

int finda(int n)
{
    int countn = 0;
    if (count[n] == 0)
    {
        for (int i = 1; i <= n / 2; i++)
        {
            countn += finda(i);
        }
        count[n] = countn + 1;
        return countn + 1;
    }
    else
    {
        return count[n];
    }
}

int main(int argc, char const *argv[])
{
    cin >> n;
    memset(count, 0, sizeof(count));
    count[1] = 1;
    count[2] = 2;

    cout << finda(n);

    //system("PAUSE");
    return 0;
}
