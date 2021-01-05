#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;

int main()
{
    int a, b;
    pair<int, int> startPoint;
    pair<int, int> endPoint;

    bool g[1000][1000];
    map<pair<int, int>, int> dst;
    //int dst[1000][1000];
    map<pair<int, int>, pair<int, int>> dict;
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
            {
                g[i][j] = false;
                if (s[j] == 'A')
                    startPoint = { i,j };
                if (s[j] == 'B')
                    endPoint = { i,j };
            }
                
        }
    }
    queue<pair<int,int>> q;
    q.push(startPoint);
    //g[startPoint.first][startPoint.second] = true;
    dst[{startPoint.first, startPoint.second}] = 0;
    dict.insert({ startPoint,{-1,-1} });
    while (q.size() != 0)
    {
        pair<int, int> k = q.front();
        q.pop();
        if (k.first < 0 || k.first >= a || k.second < 0 || k.second >= b) continue;
        if (k == endPoint)
        {
            cout << "YES" << endl;
            cout << dst[{endPoint.first, endPoint.second}] << endl;

            vector<pair<int, int>> path;
            pair<int, int> cur = k;
            path.push_back(cur);
            while ((cur.first != -1) || (cur.second != -1))
            {
                cur = dict[cur];
                path.push_back(cur);
            }
            reverse(path.begin(), path.end());
            for (int i = 1;i < path.size()-1; i++)
            {
                pair<int, int> next = path[i + 1];
                pair<int, int> prev = path[i];
                pair<int, int> l = { next.first - prev.first,next.second - prev.second };
                if (l.first == -1)
                    cout << 'U';
                if (l.first == 1)
                    cout << 'D';
                if (l.second == 1)
                    cout << 'R';
                if (l.second == -1)
                    cout << 'L';
            }
            return 0;
        }
        if (g[k.first][k.second] == true) continue;
        g[k.first][k.second] = true;
        
        for (int dx = -1; dx <= 1; dx++)
            for (int dy = -1; dy <= 1; dy++)
                //if (dx != 0 && dy != 0 &&) continue;
                if (abs(dx) == abs(dy)) continue;
                else
                {
                    if (k.first+dx < 0 || k.first+dx >= a || k.second+dy < 0 || k.second+dy >= b) continue;
                    else
                    {
                        if (g[k.first + dx][k.second+dy] == true) continue;
                        else
                        {
                            q.push({ k.first + dx, k.second + dy });
                            //g[k.first + dx][k.second + dy] = true;
                            dst[{k.first + dx, k.second + dy}] = dst[{k.first, k.second}] + 1;
                            dict.insert({ {k.first + dx,k.second + dy},{ k.first, k.second} });
                        }                        
                    }                   
                }
                                
    }
  
    cout << "NO";
    return 0;
}
