#include <iostream>
#include <vector>
using namespace std;
bool binarSearch(int arr[4][5], int rows, int cols, int k)
{
    int s = 0;
    int e = rows * cols - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        int rowIdx = mid / cols;
        int colIdx = mid % cols;

        if (arr[rowIdx][colIdx] == k)
        {
            cout << "Found at " << rowIdx << " " << colIdx << endl;
            return true;
        }

        else if (arr[rowIdx][colIdx] > k)
        {
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return false;
}
int main()
{
    int n = 4; // no. of rows
    int m = 5; // no. of columns
    int arr[4][5] = {{0, 6, 8, 9, 11},
                     {20, 22, 28, 29, 31},
                     {36, 38, 50, 61, 63},
                     {64, 66, 100, 122, 128}};
    int k = 31;
    int ans = binarSearch(arr, n, m, k);
    if (ans)
    {
        cout << " " << endl;
    }
    else
    {
        cout << "not Found" << endl;
    }
}