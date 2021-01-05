#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    long long n,a,b,res;
    cin >> n;
    for (long long i = 0;i < n;i++)
    {
        cin >> a >> b;
        long long c = max(a, b);
        res = (c - 1) * (c - 1);
        if (c%2!=0)
            res += c + b - a;
        else
            res += c + a - b;
        cout << res<<endl;
    }
}