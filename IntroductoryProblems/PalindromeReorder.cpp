#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    long long n, a, b; 
    string s,s1,s2,s3;
    cin >> s;
    string alf = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    map<char, long long> dict;
    for (long long i = 0;i < 26;i++)
    {
        dict.insert(pair<char, long long>(alf[i], 0));
    }
    for (long long i = 0;i < s.length();i++)
    {
            dict[s[i]]++;
    }
    long long flag = 0;
    for (auto x : dict)
    {
        if (x.second != 0)
        {
            if (x.second % 2 == 0)
            {
                long long k = x.second / 2;
                s1.append(k,x.first);
                s2.insert(0,k,x.first);
            }
            else
            {
                long long k = x.second;
                if (flag == 0)
                {
                    for (long long i = 0;i < k;i++)
                        s3 += x.first;
                }
                    
                flag++;
            }
        }
        
    }
    if (flag > 1)
        cout << "NO SOLUTION" << endl;
    else
    {
        if (flag == 0)
            cout << s1 << s2 << endl;
        else
            cout << s1 <<s3<< s2 << endl;
    }
}