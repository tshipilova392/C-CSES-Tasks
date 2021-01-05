#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n;
    vector<int> w1, w2;
    int sum = (1 + n) * n / 2;
    if (sum % 2 != 0)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    cout << "YES" << endl;
    if (n % 2 == 0)
    {
        for (int i = 1;i <= n / 4;i++)
        {
            w1.push_back(i);
            w1.push_back(n - i + 1);
        }
        for (int i = n/4+1;i <= 3*n / 4;i++)
        {
            w2.push_back(i);
        }
    }
    else
    {
        k = n;
        w1.push_back(1);
        w1.push_back(2);
        w2.push_back(3);
        while (k > 3)
        {
            w1.push_back(k);
            w1.push_back(k-3);
            w2.push_back(k-1);
            w2.push_back(k - 2);
            k -= 4;
        }
    }
    cout << w1.size() << endl;
    for (auto x : w1)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << w2.size() << endl;
    for (auto x : w2)
    {
        cout << x << " ";
    }
}