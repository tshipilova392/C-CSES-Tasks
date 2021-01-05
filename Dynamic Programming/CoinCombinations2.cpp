#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

vector<long> c;
vector<long> k;
//long mmax;

int f(int d, int len)
{
    //if (d<=mmax)
    if (find(c.begin(), c.begin()+len, d) != c.begin() + len)
        return 1;
    long sum = 0;
    long b = 0;
    for (int i=len-1;i>=0;i--)
    {
        if (d - c[i] > 0)
            sum += f(d - c[i], len - b);
        b++;      
    }
    return sum;
}

int main()
{
    long n, x, t, res, i;
    cin >> n >> x;
    long m = 1000000007;
    //mmax = 0;
    for (i = 0;i < n;i++)
    {
        cin >> t;
        c.push_back(t);
        //if (t > mmax)
         //   mmax = t;
    }

    
    //k.resize(mmax+1);
   /* k[0] = 0;
    for (i = 0;i < n;i++)
    {
        k[c[i]] = 1;
    }*/
    cout << f(x, n);

    /*
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
    cout << k[x];*/
}
