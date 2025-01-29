#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinary1(int n)
{
    int binaryNo = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryNo = bit * pow(10, i) + binaryNo;
        i++;
        cout << bit << endl;
        n /= 2;
    }
    return binaryNo;
}

int main()
{
    int n;
    cin >> n;
    int binary = decimalToBinary1(n);
    cout << binary << endl;

    return 0;
}