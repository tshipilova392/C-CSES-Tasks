#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n ==1)
    {
        cout << 1 << endl;
        return 0;
    }
    if ((n == 3)||(n==2))
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    if (n ==4)
    {
        cout << "2 4 1 3" << endl;
        return 0;
    }
    for (int i = 1;i <= n;i+=2)
    {
        cout << i << " ";
    }
    for (int i = 2;i <= n;i += 2)
    {
        cout << i << " ";
    }
}