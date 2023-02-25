#include <iostream>
using namespace std;
int BinarSearch(int arr[], int size, int start, int end, int target)
{

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int ExponentialSearch(int arr[], int n, int target)
{
    int index = -1;

    if (arr[0] == target)
    {
        return 0;
    }

    for (int i = 1; i < n; i = i * 2)
    {
        if (arr[i] >= target)
        {
            index = i;
            break;
        }
    }
    int ans = BinarSearch(arr, n, index / 2, index, target);
    return ans;
}

int main()
{
    int arr[] = {2, 5, 6, 8, 9, 12, 34, 56, 99};
    int target = 56;
    int ans = ExponentialSearch(arr, 9, 6);
    cout << ans;

    return 0;
}