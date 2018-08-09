#include <iostream>
#include <string>
using namespace std;

string a,b;

int num(string s){
    int back = 1;
    for(int i = 0; i < s.size(); i++){
        back *= s[i] - 'A' + 1;
    }
    back = back % 47;
    return back;
}

int main()
{
    cin >> a;
    cin >> b;

    if(num(a) == num(b))
        cout << "GO";
    else
        cout << "STAY";

    //system( "PAUSE"); 
    return 0;
}
