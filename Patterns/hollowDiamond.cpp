#include <iostream>
using namespace std;

void hollowParamid(int rows)
{
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            if (j == 0 || j == i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

void hollowInvertedParamid(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < rows - i; j++)
        {
            if (j == 0 || j == rows - i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void hollowDiamond(int rows)
{
    hollowParamid(rows);
    hollowInvertedParamid(rows);
}

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    hollowDiamond(rows);
    return 0;
}
