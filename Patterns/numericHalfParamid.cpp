#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the number of rows: ";
    int rows;
    cin >> rows;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}