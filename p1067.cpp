#include <iostream>
#include <sstream>
using namespace std;

int ni;
string out = "";

int abc(int n)
{
    string in;
    string ns;
    cin >> in;

    if (n == 1)
    {
        if (in == "0")
        {
        }
        else if (in == "-1")
        {
            out = out + "-x";
        }
        else if (in == "1")
        {
            out = out + "+x";
        }
        else if (in[0] == '-')
        {
            out = out + in + "x";
        }
        else
        {
            out = out + "+" + in + "x";
        }
        abc(n - 1);
        return 0;
    }
    else if (n == 0)
    {
        if (in == "0")
        {
        }
        else if (in[0] == '-')
        {
            out = out + in;
        }
        else
        {
            out = out + "+" + in;
        }
        return 0;
    }
    else
    {

        stringstream stream;
        stream << n;
        stream >> ns;
        if (in == "0")
        {
        }
        else if (in == "-1")
        {
            out = out + "-x^" + ns;
        }
        else if (in == "1")
        {
            out = out + "+x^" + ns;
        }
        else if (in[0] == '-')
        {
            out = out + in + "x^" + ns;
        }
        else
        {
            out = out + "+" + in + "x^" + ns;
        }
        abc(n - 1);
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    cin >> ni;
    abc(ni);

    if (out[0] == '+')
    {
        for (int i = 1; i < out.size(); i++)
        {
            cout << out[i];
        }
    }
    else
    {
        cout << out;
    }

    //system("PAUSE");
    return 0;
}
