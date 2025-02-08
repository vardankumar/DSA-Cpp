#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int k = n;
    for (int i = 0; i < n; i++)
    {
        int c = 1;
        for (int j = 0; j < k; j++)
        {
            if (j < n - i - 1)
            {
                cout << " ";
            }
            else if (j <= n - 1)
            {
                cout << c;
                c++;
            }
            else if (j == n)
            {
                c -= 2;
                cout << c;
                c--;
            }
            else if (j > n)
            {
                cout << c;
            }
        }
        k++;
        cout << endl;
    }

    return 0;
}