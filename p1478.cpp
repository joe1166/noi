#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, s;
int a, b, c;
vector<int> z;
int counta = 0;

int main(int argc, char const *argv[])
{
    cin >> n >> s;
    int x[n], y[n];
    cin >> a >> b;
    c = a + b;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
        if (x[i] <= c)
        {
            z.push_back(y[i]);
        }
    }

    sort(z.begin(), z.end());

    for (int i = 0; i < z.size(); i++)
    {
        if (s - z[i] < 0)
        {
            break;
        }
        s -= z[i];
        counta++;
    }

    cout << counta;

    //system("PAUSE");
    return 0;
}
