#include <iostream>
using namespace std;

void solidHalfDiamond(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int condition = 0;
        if (i < n)
        {
            condition = i;
        }
        else
        {
            condition = n - (i % n) - 2;
        }
        for (int j = 0; j <= condition; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    solidHalfDiamond(n);

    return 0;
}