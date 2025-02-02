#include <iostream>
using namespace std;

void invertedParamid(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void fullParamid(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void diamond(int rows)
{
    fullParamid(rows);
    invertedParamid(rows);
}

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    diamond(rows);
    return 0;
}
