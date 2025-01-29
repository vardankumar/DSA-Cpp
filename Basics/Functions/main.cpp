#include <iostream>
using namespace std;

// void printCounting()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
// }

int sum(int a, int b)
{
    int totalSum = a + b;
    return totalSum;
}

void printCounting()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    // printCounting();
    // cout << "vardan" << endl;
    // printCounting();

    cout << sum(10, 20) << endl;
    printCounting();

    return 0;
}