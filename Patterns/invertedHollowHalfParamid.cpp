#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the number of rows: ";
    int rows;
    cin >> rows;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < rows - row; col++)
        {
            if (row == 0 || row == rows - 1 || col == 0 || col == rows - row - 1)
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

    return 0;
}