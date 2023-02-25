#include <iostream>
using namespace std;

void printRowSum ( int arr[3][3], int row , int col){
    
    for (int i = 0 ; i< row; i++){
        int sum = 0;
        for (int j = 0; j< col ; j++){
               sum+=arr[i][j];
        }
        cout << sum << " ";
    }
}
int main()
{    
    // taking input in 2d array
    int arr[3] [3];
    for (int i = 0 ; i< 3; i++){
        for (int j = 0; j< 3 ; j++){
                cin >> arr[i][j];
        }
    }

        // printting the array
    for (int i = 0 ; i< 3; i++){
        for (int j = 0; j< 3 ; j++){
              cout << arr[i][j];
        }
        cout << endl;
    }
      cout << endl;

    // row sum print of an arrya
    printRowSum (arr , 3 , 3);
    return 0;
}