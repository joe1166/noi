#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string word;
string in;
int ia = 0, ib = 0;
int j = 0;
int counta = 0;
int first = 0;
bool same; //两单词是否相同

int main()
{
    getline(cin, word);
    getline(cin, in);
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    transform(in.begin(), in.end(), in.begin(), ::tolower);

    for (ib = 0; ib < in.size() + 1; ib++)
    {
        if (in[ib] == ' ' || ib == in.size())
        {
            //确定一个单词位置
            if ((ib - ia) == word.size())
            {
                //长度相同进入
                same = true;
                for (j = 0; j < word.size(); j++)
                {
                    if (in[ia] == word[j])
                    {
                        ia++;
                        continue;
                    }
                    else
                    {
                        same = false;
                        break;
                    }
                }
                ia = ib + 1; //重置下一单词起始位置

                if (same)
                {
                    //完全匹配
                    if (counta == 0)
                    {
                        first = ia - word.size() - 1;
                    }
                    counta++;
                }
            }
            else
            {
                ia = ib + 1; //重置下一单词起始位置
            }
        }
    }

    if (counta == 0)
    {
        cout << "-1";
    }
    else
    {
        cout << counta << " " << first;
    }

    //system("PAUSE");
    return 0;
}
