#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int a, b,kol;
bool g[1000][1000];

int main()
{
    kol = 0;
    string s;
    cin >> a >> b;
    for (int i = 0;i < a;i++)
    {
        cin >> s;
        for (int j = 0;j < b;j++)
        {
            if (s[j] == '#')
                g[i][j] = true;
            else
                g[i][j] = false;
        }
    }
    cout << endl;
    queue<pair<int,int>> q;
    for (int i = 0;i < a;i++)
    {
        for (int j = 0;j < b;j++)
        {
            if (g[i][j] == false)
            {
                kol++;
                q.push({ i,j });
                while (q.size() != 0)
                {
                    pair<int, int> k = q.front();
                    q.pop();
                    if (k.first < 0 || k.first >= a || k.second < 0 || k.second >= b) continue;
                    if (g[k.first][k.second] == true) continue;
                    g[k.first][k.second] = true;
                    for (int dy = -1; dy <= 1; dy++)
                        for (int dx = -1; dx <= 1; dx++)
                            if (dx != 0 && dy != 0) continue;
                            else q.push({ k.first + dx, k.second + dy });
                }
            }
        }
    }
    
    cout << kol;
}
