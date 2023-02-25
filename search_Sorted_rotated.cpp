//                               SEARCH IN ROTATED AND SORTED ARRAY

/* 
WHAT IS  ROTATED AND SORTED ARRAY ??
    SIPMLE INITIAL  ARRAY IS     {1,2,3,4,5,6}
    rotate by 1 is               {6,1,2,3,4,5}
    rotate by 2 is               {5,6,1,2,3,4}
    rotate by 3 is               {4,5,6,1,2,3}

                ALGORITHM
            -> find pivot 
            ->  if the target lies between arr[0] to arr[pivotIndex] then use binary search
            ->  if the target lies between arr[pivotIndex+1] to arr[size] then use binary search
 */

#include <iostream>
#include <vector>
using namespace std;


// functio for pivot index

int pivot (vector <int> arr){
    int s = 0; 
    int e = arr.size()-1;
    int mid = s+ (e-s)/2;

    while (s < e)
    {
        if ( mid+1 < arr.size() && arr[mid] > arr[mid+1]) {     
            return mid;
        }                                                       
        if ( mid-1 > 0 && arr[mid-1] > arr[mid]){
            return mid-1;
        }

        if (arr[s] >= arr[mid]){
           e = mid-1;
        }
        else {
            s= mid;
        }

        mid = s+ (e-s)/2;
    }
    return s;
}

// binary search 
int BinarSearch (vector <int> arr ,int start , int end, int target){

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
    vector <int> arr{4,5,6,1,2,3};

    int pivotIndex = pivot(arr);
    // cout << pivotIndex;

    int target ;
    cout << "enter an element you want to search : ";
    cin >> target;

    if (target <= arr[pivotIndex] && target >= arr[0]){
       int ans =  BinarSearch(arr , 0 , pivotIndex, target);
       cout <<" target at index is "<< ans;
    }

    if ( pivotIndex+1 < arr.size() && target <= arr[arr.size()-1] && target >= arr[pivotIndex+1]){
       int ans =  BinarSearch( arr ,pivotIndex+1 , arr.size()-1 ,target);          // if the pivotindex is present 
          cout << " Target at index is "<< ans;                                    // last index of an array

    }

    return 0;
}