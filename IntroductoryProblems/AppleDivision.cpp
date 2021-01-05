#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

vector<int> subset;
vector<int> weights;
long long min1 = 1000000000;
int n;
long long sum = 0;

void search(int k)
{
    if (k == n)
    {
        long long sum1 = 0;
        for (auto x : subset)
        {
            sum1 += weights[x];
            //cout << x;
        }
        long long dif = abs((sum - sum1) - sum1);
        if (dif< min1)
        {
            min1 = dif;
        }
    }
    else
    {
        subset.push_back(k);
        search(k + 1);
        subset.pop_back();
        search(k + 1);
    }
}

int main()
{  
    long long x;
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        cin >> x;
        weights.push_back(x);
        sum += x;
    }
    search(0);
    cout << min1;  
}
