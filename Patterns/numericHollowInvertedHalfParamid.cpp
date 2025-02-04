#include <iostream>
using namespace std;

void numericHollowInvertedHalfParamid(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (i == 0 || j == i + 1 || j == n)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    numericHollowInvertedHalfParamid(n);

    return 0;
}