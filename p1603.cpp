#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <math.h>
#include <algorithm>
using namespace std;
stringstream stream;

string in;
string num[21] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
int begina = 0;
string b;
vector<string> a;
int smalls = 0;
int smallf = 0;
string out = "";
long long outf;

int main(int argc, char const *argv[])
{

    getline(cin, in);
    transform(in.begin(), in.end(), in.begin(), ::tolower);

    for (int i = 0; i < 21; i++)
    {
        begina = 0;
        while (in.find(num[i], begina) != string::npos)
        {
            //cout << in.find(num[i], begina);
            b = "";
            stringstream stream;
            int j = (i * i) % 100;
            //cout << j << endl;

            if (j < 10)
            {
                stream << j;
                stream >> b;
                b = "0" + b;
            }
            else
            {
                stream << j;
                stream >> b;
            }
            a.push_back(b);

            begina = in.find(num[i], begina) + num[i].size();
        }
    }

    if (in.find(" a ", begina) != string::npos)
    {
        a.push_back("01");
    }
    if (in.find("both", begina) != string::npos)
    {
        a.push_back("04");
    }
    if (in.find("another", begina) != string::npos)
    {
        a.push_back("04");
    }
    if (in.find("first", begina) != string::npos)
    {
        a.push_back("01");
    }
    if (in.find("second", begina) != string::npos)
    {
        a.push_back("04");
    }
    if (in.find("third", begina) != string::npos)
    {
        a.push_back("09");
    }

    sort(a.begin(), a.end());
    stringstream stream;

    for (int k = 0; k < a.size(); k++)
        out += a[k];

    stream << out;
    stream >> outf;

    cout << outf;

    //system("PAUSE");
    return 0;
}
