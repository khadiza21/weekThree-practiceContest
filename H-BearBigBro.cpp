#include <bits/stdc++.h>
using namespace std;
int main()
{
    int limakW8, bobW8, year;
    cin >> limakW8 >> bobW8;
    for (year = 0; limakW8 <= bobW8; year++)
    {
        limakW8 = limakW8 * 3;
        bobW8 = bobW8 * 2;
    }
    cout << year;

    return 0;
}