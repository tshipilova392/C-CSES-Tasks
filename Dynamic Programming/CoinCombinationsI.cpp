#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;


int main()
{
    long n, x, t, res, i;
    cin >> n >> x;
    long m = 1000000007;
    vector<long> c;
    for (i = 0;i < n;i++)
    {
        cin >> t;
        c.push_back(t);
    }
    vector<long> k;
    k.push_back(1);
    for (i = 1;i <= x;i++)
    {
        long sum = 0;
        for (auto s : c)
        {
            if (i - s >= 0)
                sum += k[i - s];
        }
        sum = sum%m;
        k.push_back(sum);
    }
    cout << k[x];
}
