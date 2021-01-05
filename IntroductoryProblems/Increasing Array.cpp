#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long n,a,b,kol=0;
    cin >> n;
    cin >> a;
    for (int i = 1;i < n;i++)
    {
        b = a;
        cin >> a;
        if (a < b)
        {
            kol += b - a;
            a = b;
        }
    }
    cout << kol;
}