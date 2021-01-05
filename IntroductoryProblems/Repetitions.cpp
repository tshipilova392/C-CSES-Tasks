#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long long n = s.length();
    int kol = 1;
    int max = 0;
    for (int i = 1;i <= n;i++)
    {
        if (s[i] == s[i - 1])
        {
            kol++;
        }
        else
        {
            if (kol > max)
                max = kol;
            kol = 1;
        }
    }
    cout << max;
}