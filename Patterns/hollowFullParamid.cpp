#include <iostream>
using namespace std;

void hollowFullParamid(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            if (j == 0 || j == i - 1 || i == rows - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    hollowFullParamid(rows);

    return 0;
}