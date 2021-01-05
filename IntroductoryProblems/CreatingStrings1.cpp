#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    string s;
    vector<string> w;
    int n=1;
    cin >> s;
    sort(s.begin(), s.end());
    w.push_back(s);
    while (next_permutation(s.begin(), s.end()))
    {
        n++;
        w.push_back(s);
    }
    cout << n << endl;
    for (auto x : w)
    {
        cout << x<<endl;
    }
}