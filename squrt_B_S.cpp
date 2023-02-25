#include <iostream>
using namespace std;

int squrt (int n){
    int s = 0;
    int e = n;
    int mid = s+(e-s)/2;
    int target = n;
    int ans = -1;

    while ( s <= e ){
        if (mid*mid == target){
            return mid;
        }
        else if (mid*mid > target){
            e = mid-1;
        }
        else {
            ans = mid ;
            s= mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int n; 
    cout << "enter a number : ";
    cin >> n;
    int ans = squrt(n);
    
    double finalAnswer =ans;
    double step = 0.1;
       
        for (int i = 0 ; i<3 ; i++){
            for (double j = finalAnswer; j*j <= n ; j=j+step ){
                finalAnswer=j;
            }
            step = step/10;
            // cout << "step " << i;
        }

        cout << finalAnswer;
    return 0;
}