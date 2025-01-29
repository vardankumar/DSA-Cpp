#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinary2(int n)
{
    int binaryNo = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n & 1;
        binaryNo = bit * pow(10, i++) + binaryNo;
        cout << bit << endl;
        n = n >> 1;
    }
    return binaryNo;
}

int main()
{
    int n;
    cin >> n;
    int binary = decimalToBinary2(n);
    cout << binary << endl;

    return 0;
}