#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    // pre increment (first increases then prints)
    cout << ++a << endl;

    // post increment (first prints then increases)
    cout << a++ << endl;

    // pre decrement (first decreases then prints)
    cout << --a << endl;

    // post decrement (first prints then decreases)
    cout << a-- << endl;

    return 0;
}