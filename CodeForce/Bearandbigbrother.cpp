#include <iostream>
using namespace std;
int main()
{
    int L, B, year = 0;
    cin >> L >> B ;

    while (L <= B)
    {
        L = L * 3;
        B = B * 2;
        year++;
    }
    cout << year ;

}