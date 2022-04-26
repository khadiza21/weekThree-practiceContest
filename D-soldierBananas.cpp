#include <bits/stdc++.h>
using namespace std;
int main()
{
    int wantBananas, kDollars, availableDollarsN, borrowDollars, sum = 0;
    cin >> kDollars >> availableDollarsN >> wantBananas;

    for (int i = 1; i <= wantBananas; i++)
    {

        sum += (i * kDollars);
    }

    borrowDollars = sum - availableDollarsN;

    if (borrowDollars > 0)
    {
        cout << borrowDollars << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}