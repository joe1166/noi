#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int b;
vector<string> k;
string a = "0 0 0 0 0 0 0 0 0 0";

int finda(int n, int b)
{
    int nn = n * 2 - 2;
    int bn;
    for (int i = 1; i <= 3; i++)
    {
        bn = b - i;
        if (bn < 0)
        {
            continue;
        }
        stringstream stream;
        stream << i;
        stream >> a[nn];

        if (n == 10)
        {
            if (bn == 0)
            {
                k.push_back(a);
            }
            else
            {
                continue;
            }
        }
        else
        {
            finda(n + 1, bn);
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> b;
    if (b < 10 || b > 30)
    {
        cout << "0";
        return 0;
    }

    finda(1, b);

    sort(k.begin(), k.end());

    cout << k.size() << endl;
    for (int i = 0; i < k.size(); i++)
    {
        cout << k[i];
        if (i < k.size() - 1)
        {
            cout << endl;
        }
    }

    //system("PAUSE");
    return 0;
}
