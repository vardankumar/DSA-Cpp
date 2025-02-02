#include <iostream>
using namespace std;

// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch++;
        }
        ch--;
        while (ch > 'A')
        {
            ch--;
            cout << ch;
        }
        cout << endl;
    }
}