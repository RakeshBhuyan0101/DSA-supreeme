// in unbounded case array size in infinite 

#include <iostream>
using namespace std;

int BinarSearch(int arr[], int start, int end, int target)
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

int unboundedSearch(int arr[], int target)
{
    int low = 0;
    int high = 1;

    while (arr[high] < target){
        low = high ;
        high = high*2;   // search space incerase by twice
    }

    
    int ans = BinarSearch(arr,  low , high, target);
    return ans;
}

int main()
{
    int arr[] = {2, 5, 6, 8, 9, 12, 34, 56, 99};
    int target = 56;
    int ans = unboundedSearch(arr, 6);
    cout << ans;

    return 0;
}