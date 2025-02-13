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

int findMax(int arr[], int size)
{
}

void printZeroesAndOnes(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    cout << "Number of zeros in array : " << zeroCount << endl;
    cout << "Number of ones in array : " << oneCount << endl;
}

void extremesPrinting(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left++] << " ";
        }
        else
        {
            cout << arr[left++] << " ";
            cout << arr[right--] << " ";
        }
    }
}

int main()
{

    // ------- TWO POINTERS APPROACH IN ARRAY ----------

    int arr[] = {100, 200, 300, 400, 500, 600, 700};
    int size = 7;
    extremesPrinting(arr, size);

    // -----------------------------------------------

    // Counting zeroes and ones in an array linearly

    // int arr[] = {0, 1, 0, 0, 1, 1, 0, 1, 0};
    // int size = 9;

    // printZeroesAndOnes(arr, size);

    // --------------------------------------------

    // ARRAYS ARE PASSED BY REFERENCE

    // -----------------------------------------------

    // int arr[] = {10, 20, 30, 40, 50};
    // int size = 5;
    // int target = 50;

    // bool ans = findTarget(arr, size, target);
    // cout << ans << endl;

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