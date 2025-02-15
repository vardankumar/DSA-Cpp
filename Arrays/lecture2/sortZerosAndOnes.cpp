#include <iostream>
#include <algorithm>
using namespace std;

void sortZerosAndOnes(int arr[], int n)
{

    // SORTING APPROACH

    sort(arr, arr + n);

    // COUNTING ZEROS AND ONES APPROACH
    // int zeroCount = 0;
    // int oneCount = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //         zeroCount++;
    //     if (arr[i] == 1)
    //         oneCount++;
    // }

    // int i = 0;
    // for (; i < zeroCount; i++)
    //     arr[i] = 0;

    // for (; i < n; i++)
    //     arr[i] = 1;

    // fill(arr, arr + zeroCount, 0);
    // fill(arr + zeroCount, arr + n, 1);

    // TWO POINTERS APPROACH
    // int i = 0;
    // int j = n - 1;
    // while (i < j)
    // {

    //     while (arr[i] == 0)
    //     {
    //         i++;
    //     }
    //     while (arr[j] == 1)
    //     {
    //         j--;
    //     }
    //     if (arr[i] == 1 && arr[j] == 0)
    //     {
    //         swap(arr[i], arr[j]);
    //     }
    //     j--;
    // }
}

int main()
{
    int arr[] = {0, 1, 1, 1, 0, 0, 1, 1};
    int size = 8;
    sortZerosAndOnes(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
