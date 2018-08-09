#include <iostream>
using namespace std;

int n;
int x, y;
int out = -1;

int main(int argc, char const *argv[])
{
    cin >> n;
    int k[n + 1][4];

    for (int i = 1; i < n + 1; i++)
    {
        cin >> k[i][0] >> k[i][1] >> k[i][2] >> k[i][3];
    }
    cin >> x >> y;

    for (int j = n; j > 0; j--)
    {
        if (k[j][0] <= x && k[j][0] + k[j][2] >= x && k[j][1] <= y && k[j][1] + k[j][3] >= y)
        {
            out = j;
            break;
        }
    }

    cout << out;

    //system("PAUSE");
    return 0;
}
