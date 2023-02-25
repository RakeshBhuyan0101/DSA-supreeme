#include <iostream>
using namespace std;

int solve(int dividend, int divisor)
{
    int s = 0;
    int e = abs(dividend);
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (mid * abs(divisor) == abs(dividend))
        {
            ans= mid;
            cout << ans;
            return 0;
        }

        else if (mid * abs(divisor) > abs(dividend))
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int divisor = 7;
    int dividend = -25;
    int ans = solve(dividend, divisor);
    // cout << ans;

    if (divisor < 0 && dividend < 0){
        cout << ans;
    }
    else {
        cout << ans*-1;
    }

    // double step = 0.1;
    // double finalAnswer = ans;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (double j = finalAnswer *divisor; j <= dividend; j = finalAnswer + step)
    //     {
    //         finalAnswer = j;
    //         return 0;
    //     }
    //     step = step / 10;
    // }

    // cout << "final answer" << finalAnswer ;

    return 0;
}