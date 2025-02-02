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

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    invertedParamid(rows);
    return 0;
}
