#include <iostream>
using namespace std;

pair<int, int> checkTwoSum(int arr[], int n, int target)
{
    pair<int, int> ans = make_pair(-1, -1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    int target = 60;
    pair<int, int> ans = checkTwoSum(arr, n, target);
    if (ans.first == -1 && ans.second == -1)
    {
        cout << "Pair not Found" << endl;
    }
    else
    {
        cout << "Pair found " << ans.first << ", " << ans.second << endl;
    }

    return 0;
}