#include <iostream>
#include <stdio.h>
using namespace std;

int n;

void sorta(int a, int b, int num[])
{
    if (a >= b)
    {
        return;
    }
    int k = num[a];
    int x = a;
    int y = b;

    while (y > x)
    {
        for (; y > x && num[y] >= k; y--)
        {
        }
        num[x] = num[y];

        for (; x < y && num[x] <= k; x++)
        {
        }
        num[y] = num[x];
    }
    num[x] = k;

    sorta(a, x - 1, num);
    sorta(x + 1, b, num);
    return;
}

int main(int argc, char const *argv[])
{
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    sorta(0, n - 1, num);

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", num[i]);
    }
    printf("%d\n", num[n - 1]);

    system("PAUSE");
    return 0;
}
