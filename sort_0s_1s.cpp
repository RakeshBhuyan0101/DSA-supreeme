#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> arr{1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0};

  int low = 0;
  int high = arr.size() - 1;

  while (low <= high)
  {
    if (arr[low] == 1)
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