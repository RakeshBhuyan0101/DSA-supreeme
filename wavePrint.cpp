#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr{{0, 6, 8, 9, 11},
                            {20, 22, 28, 29, 31}, // 0 20 36 64 66 38 22 6 8 28 50 100 122 61 29 9 11 31 63 128
                            {36, 38, 50, 61, 63},
                            {64, 66, 100, 122, 128}};
    int row = arr.size();
    int col = arr[0].size();
// column wise wave printing
    for (int startcol = 0; startcol < col; startcol++)
    {
        if ((startcol & 1) == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][startcol] << " ";
            }
            // cout << endl;
        }

        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[i][startcol] << " ";
            }
            //  cout << endl;
        }
    }
    cout << endl;
// row wise wave print
    for (int rowStart = 0; rowStart < row; rowStart++)
    {
        if ((rowStart & 1) == 0)
        {
            // left to right
            for (int i = 0; i < col; i++)
            {
                cout << arr[rowStart][i] << " ";
            }
        }

        if ((rowStart & 1) == 1)
        {
            // right to left
            for (int i = row; i >= 0; i--)
            {
                cout << arr[rowStart][i] << " ";
            }
        }
    }
    return 0;
}