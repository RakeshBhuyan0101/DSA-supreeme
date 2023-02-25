// PEACK IN A MOUNTAIN ARRAY

#include <iostream>
#include<vector>
using namespace std;

int solve (vector <int> arr ){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;

    while ( s<e ){
        if ( arr[mid] <  arr[mid+1] ){
            s= mid+1;
        }
        else {
            e =mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}
int main()
{
    vector <int> arr{0,10,5,2};  // 3,4,5,1
    int ans = solve (arr);
    cout << ans;
    return 0;
}