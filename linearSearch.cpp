#include <iostream>
using namespace std;

bool linearSearch(int arr[3][3], int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    // taking input in 2d array
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // print ting the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    int key;
    cout << " Enter eleemnt you want to search :";
    cin >> key;

    if (linearSearch(arr, 3, 3, key))
    {
        cout << " element is present";
    }
    else
    {
        cout << "Element is not present";
    }

    return 0;
}