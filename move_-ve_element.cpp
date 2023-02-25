#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> arr{-2,3,0,12,-34,-5,-67};

  int low = 0;
  int high = arr.size() - 1;

  while (low <= high)
  {
    if (arr[low] >=0 )
    {
      swap(arr[low], arr[high]);
      high--;
    }

    else
    {
      low++;
    }
  }

  for (auto a : arr)
  {
    cout << a << " ";
  }
  return 0;
}