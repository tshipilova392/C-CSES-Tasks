#include <vector>
#include <iostream>
using namespace std;
int main()
{
    long long n,res;
    long long m = 1000000007;
    cin >> n;
    res = 1;
    for (long long i = 0;i < n;i++)
    {
        res = (res*2)%m;
    }
    cout << res;
}