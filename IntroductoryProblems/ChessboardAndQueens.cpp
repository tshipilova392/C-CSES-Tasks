#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main()
{
    vector<int> w = { 0,1,2,3,4,5,6,7};
    //vector<int> w = { 3,7,0,2,5,1,6,4 };
    int mas[8][8];
    int n = 0;
    string s;
    for (int i = 0;i < 8 ; i++)
    {
        cin >> s;
        for (int j = 0;j < 8;j++)
        {
            if (s[j] == '.') mas[i][j] = 0;
            else mas[i][j] = 1;
        }
    }

    while (next_permutation(w.begin(), w.end()))
    {
        bool b = true;
        for (int i = 0;i < 8;i++)
        {
            int j = w[i];
            if (mas[i][j] == 1)
            {
                b = false;
                break;
            }
        }
        if (b)
        {
            set<int> c1,c2;
            for (int i = 0;i < 8;i++)
            {
                int j = w[i];
                c1.insert(i + j);
                c2.insert(i - j);             
            }
            if ((c1.size() == 8) && (c2.size() == 8))
                n++;
        }
    }
    cout << n;
}