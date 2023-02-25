#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr{{0, 6, 8, 9, 11},
                            {20, 22, 28, 29, 31},
                            {36, 38, 50, 61, 63},
                            {64, 66, 100, 122, 128}};
    int row = arr.size();
    int col = arr[0].size();

    int rowStart = 0;
    int colStart = 0;
    int rowEnd = row - 1;
    int colEnd = col - 1;
    while (rowStart < rowEnd && colStart < colEnd)
    {
        for (int i = 0; i <= rowEnd; i++)
        {
            cout << arr[rowStart][i] << " ";
        }
        rowStart++;

        for (int j = 0; j <= rowEnd; j++)
        {
            cout << arr[j][colEnd] << " ";
        }
        colEnd--;

        for (int j = colEnd; j >= 0; j--)
        {
            cout << arr[rowEnd][j] << " ";
        }
        rowEnd++;
    }

    return 0;
}