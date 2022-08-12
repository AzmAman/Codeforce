#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    s[0] = towupper(s[0]); //s[0] is to make the 1st word cappital and 
    cout << s << endl;     //towupper(s[0]) is for the word which will be look like.
    return 0;
}

