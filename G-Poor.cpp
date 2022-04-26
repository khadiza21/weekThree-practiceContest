#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if (((A == B) && ((A != C) && (B != C))) || ((B == C) && ((B != A) && (C != A))) || ((C == A) && ((C != B) && (A != B))))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}