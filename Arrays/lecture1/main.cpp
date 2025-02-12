#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int arr[10];

    // // error because no size;
    // // int brr[];

    // int brr[2] = {10, 20};
    // int crr[] = {1, 2, 3, 4, 5};
    // int drr[4] = {0};

    // cout << drr[0] << endl;
    // cout << drr[91] << endl;

    // int arr[4];
    // fill(arr, arr + 4, 23);
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;

    // taking input in array on specific indexes

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the value for box index: " << i << endl;
        cin >> arr[i];
    }

    for (int j = 0; j < 10; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}