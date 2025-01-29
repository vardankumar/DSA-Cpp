#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimal(int binaryNo)
{
    int decimalNo = 0;
    int i = 0;
    while (binaryNo)
    {
        int bit = binaryNo % 10;
        decimalNo = decimalNo + bit * pow(2, i++);
        binaryNo /= 10;
    }
    return decimalNo;
}

int main()
{

    int binaryNo;
    cin >> binaryNo;
    cout << binaryToDecimal(binaryNo) << endl;

    return 0;
}