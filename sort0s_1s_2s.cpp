#include <iostream>
#include <vector>
using namespace std;


int main()
{
                                   // DOUTCH NATIONAL FLAG ALGORRITHM
    
 /*   low ->  0's = low to mid-1        [ in ths case swap low and mid then mid++ and low++ ]
      mid -->  1's =  mid to high-1     [ in this case mid++ ]
      high ->  2's = high to n-1;       [ in this case swap mid and high then high-- ]
*/
    vector <int> arr{0,0,1,1,1,1,1,2,0,0,0,2};

    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while ( mid<= high)
    {
        if (arr[mid] == 0){
            swap(arr[low++] , arr[mid++]);
        }

        else if (arr[mid] == 1){
          mid++;
        }
        else {
            swap(arr[mid] , arr[high--]);
        }
    }
    
    // printing the array
    for (auto a : arr){
        cout << a << " ";
    }

    return 0;
}