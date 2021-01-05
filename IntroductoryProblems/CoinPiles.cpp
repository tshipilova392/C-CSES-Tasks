#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void check(long long a, long long b)
{
    if (((a == 2) && (b == 1)) || ((a == 1) && (b == 2)) || ((a == 0) && (b == 0)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    long long n, a, b;
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        cin >> a >> b;
        if ((a + b) % 3 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int ma = max(a, b);
            int mi = min(a, b);
            if ((ma - mi) > mi)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}