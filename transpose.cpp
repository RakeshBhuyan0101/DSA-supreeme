#include <iostream>
using namespace std;
int main()
{
    // taking input in 2d array
    int arr[3][3];
    int transpose [3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // orignal array;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<< arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl; 

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[j] [i] = arr[i][j];
        }
    }
// copy the value of main array to transpose array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<< transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}