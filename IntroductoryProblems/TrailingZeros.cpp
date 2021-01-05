#include <vector>
#include <iostream>
using namespace std;
int main()
{
    long long n,res;
    cin >> n;
    res = 0;
    for (long long i = 0;i <= n;i+=5)
    {
        long long k = i;
        while (k > 0)
            if (k % 5 == 0)
            {
                res++;
                k = k / 5;
            }
            else
                break;
    }
    cout << res;
}