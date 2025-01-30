#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the number of rows: ";
    int rows;
    cin >> rows;
    cout << "Enter the number of columns: ";
    int cols;
    cin >> cols;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            if (row == 0 || row == rows - 1 || col == 0 || col == cols - 1)
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