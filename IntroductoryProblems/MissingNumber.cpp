#include <iostream>
using namespace std;
int main()
{
    long long n,a;
    cin >> n;
    long long sum1 = (1 + n) * n / 2;
    long long sum2 = 0;
    for (int i = 1;i <= n - 1;i++)
    {
        cin >> a;
        sum2 += a;
    }
    cout << sum1 - sum2;
}