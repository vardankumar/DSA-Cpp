#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the number of rows: ";
    int rows;
    cin >> rows;

    for (int row = 0; row < rows; row++)
    {
        int totalCols = row + 1;
        for (int col = 0; col < totalCols; col++)
        {
            if (row == 0 || row == 1 || row == rows - 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == totalCols - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}