#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, gradeNumber, compareNum, bonusNum;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        cin >> gradeNumber;

        if (gradeNumber >= 38)
        {
            compareNum = gradeNumber % 5;
            bonusNum = 5 - compareNum;
            if (compareNum > 2)
            {

                cout << gradeNumber + bonusNum << endl;
            }
            else
            {
                cout << gradeNumber << endl;
            }
        }
        else
        {
            cout << gradeNumber << endl;
        }
    }
    return 0;
}