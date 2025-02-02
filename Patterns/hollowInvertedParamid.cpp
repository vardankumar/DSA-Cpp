#include <iostream>
using namespace std;

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
            if (j == 0 || j == rows - i - 1 || i == 0)
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

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    hollowInvertedParamid(rows);
    return 0;
}
