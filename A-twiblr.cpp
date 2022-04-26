#include <bits/stdc++.h>
using namespace std;
int main()
{
    int followers, follwing;
    cin >> followers >> follwing;

    cout << (2 * followers + 100) - follwing << endl;

    return 0;
}