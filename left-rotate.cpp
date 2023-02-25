#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> arr{1, 2, 3, 4, 5};
    vector<int> temp;

    for (int i = 1; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
        temp.push_back(arr[i]);
    }
   
    cout << endl;
    temp.push_back(arr[0]);

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}