#include <iostream>
using namespace std;

void numericHollowHalfParamid(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == i)
                cout << j + 1;
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    numericHollowHalfParamid(n);

    return 0;
}