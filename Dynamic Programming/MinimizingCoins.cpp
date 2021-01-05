#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;


int main()
{
    int n,x,t, res,i;
    cin >> n>>x;
    vector<int> c;
    for (i = 0;i < n;i++)
    {
        cin >> t;
        c.push_back(t);
    }
    vector<int> k;
    k.push_back(0);

    for (i = 1;i <= x;i++)
    {
        int min1 = 1000001;
        for (auto j : c)
        {
            if (i - j >= 0)
            {
                min1 = min(min1, k[i - j]+1);
            }
        }
        k.push_back(min1);
    }
    if (k[x]!=1000001)
        cout<< k[x];
    else
        cout << -1;
}
