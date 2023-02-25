#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;
int main()
{   

     vector <int> prices{7, 2, 5, 3, 1, 4};
    int  mini = prices[0];
    int min_index;

     for (int i = 0 ; i < prices.size() ; i++){
        if ( prices[i] < mini){
            min_index = i;
            mini = prices[i];
        }
     }

     cout << min_index << " ";

    int maxi =prices[min_index];
    int max_index;

    for (int i = min_index ; i<prices.size() ; i++){
            if (prices[i] > maxi){
                max_index=i;
                maxi= prices[i];
            }
    }

    cout << max_index << endl ;

    cout << "MAXIMUM PROFIT IS " << prices[max_index]-prices[min_index] ;

    return 0;
}