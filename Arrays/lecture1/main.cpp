#include <iostream>
#include <vector>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void solve1(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * 10;
    }
}

bool findTarget(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        int currentElement = arr[i];
        if (currentElement == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    // ARRAYS ARE PASSED BY REFERENCE

    // -----------------------------------------------

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 50;

    bool ans = findTarget(arr, size, target);
    cout << ans << endl;

    // solve1(arr, size);
    // print(arr, size);

    // ----------------------------------------

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

    // --------------------------------------

    // int arr[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Enter the value for box index: " << i << endl;
    //     cin >> i[arr];
    // }

    // for (int j = 0; j < 5; j++)
    // {
    //     cout << &j[arr] << " ";
    // }

    return 0;
}