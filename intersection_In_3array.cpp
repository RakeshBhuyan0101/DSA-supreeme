//                         INTERSECTION OF 3 SORTED ARRAY
//                                   http://bit.ly/3Z8ivnL

#include <iostream>
#include <limits.h>
#include <vector>
#include <set>

using namespace std;

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;
    set<int> st;
    vector<int> ans;

    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            st.insert(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    for (auto i : st)
    {
        ans.push_back(i);
    }

    return ans;
}

int main()
{
    int arr1[] = {1,5,10,20,40,80};
    int arr2[] ={6,7,20,80,100};
    int arr3[] = {3,4,15,20,30,70,80,120};

    vector<int> ans =commonElements(arr1, arr2, arr3,6,5,8);

    for (int i = 0; i<ans.size() ; i++){
        cout << ans[i] << " ";
    }


    return 0;
}