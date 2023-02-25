#include <iostream>
#include <limits.h>
#include <algorithm>

using namespace std;

int get_max (int arr[3] [3] , int row , int col){
    int maxi = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           maxi= max(arr[i] [j] , maxi);
        }
    }
    return maxi;  
}

int get_min (int arr[3] [3] , int row , int col){
    int mini = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           mini= min(arr[i] [j] , mini);
        }
    }
    return mini;  
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

        // ouutput of 2d array

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int maxii =get_max(arr , 3 ,3);
    cout << "max element is " <<  maxii << endl;

    int minii = get_min(arr , 3 ,3);
    cout << "min element of an array " << minii;
    return 0;
}