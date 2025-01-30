#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the number of rows: ";
    int sides;
    cin >> sides;
    for (int row = 0; row < sides; row++)
    {
        for (int col = 0; col < sides; col++)
        {
            if (row == 0 || row == sides - 1 || col == 0 || col == sides - 1)
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