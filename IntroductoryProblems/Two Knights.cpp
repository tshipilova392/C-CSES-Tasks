#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    for (long long i = 1;i <= n;i++)
    {
        long long res = i * i * (i * i - 1) / 2 - 4 * (i - 1) * (i - 2);
        cout << res<<endl;
    }
}