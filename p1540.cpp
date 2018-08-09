#include <iostream>
#include <string.h>
using namespace std;

int m, n;
int a = -1;
int outa = 0;
int v = 0;

int main(int argc, char const *argv[])
{
    cin >> m >> n;
    int dic[m];
    int isin[1001];
    memset(dic, -1, sizeof(dic));
    memset(isin, 0, sizeof(isin));

    for (int ccc = 0; ccc < n; ccc++)
    {
        cin >> a;
        if (isin[a] == 1)
        {
        }
        else
        {
            outa++;
            if (v < m)
            {
                dic[v] = a;
                isin[a] = 1;
                v++;
            }
            else
            {
                isin[dic[0]] = 0;
                for (int j = 0; j < m - 1; j++)
                {
                    dic[j] = dic[j + 1];
                }
                dic[m - 1] = a;
                isin[a] = 1;
            }
        }
    }

    cout << outa;

    system("PAUSE");
    return 0;
}
