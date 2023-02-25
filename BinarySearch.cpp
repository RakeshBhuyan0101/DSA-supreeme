#include <iostream>
using namespace std;

int BinarSearch (int arr[] , int size , int target){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;

    while (start <= end){
        if (arr[mid] == target ){
            return mid;
        }

         if (arr[mid] < target){
            start= mid+1;
         }
         else {
            end = mid-1;
         }

         mid = start+(end-start)/2;
    }

    return -1;

}
int main()
{
    int arr[]={2,5,6,8,9,12,34,56,99};
    for ( int a : arr){
        cout << a << " ";
    }
    cout << endl;

    int target ;
    cout << " Enter element you want to search \n";
    cin >> target;

    int ans = BinarSearch(arr , 9 , target);
     cout <<"Arr index is " << ans;

    return 0;
}