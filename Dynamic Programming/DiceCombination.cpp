#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;


int main()
{
    long n, res,i;
    long m = 1000000007;
    cin >> n;
    vector<long> mas;
    /*mas[0] = 0;
    mas[1] = 1;
    mas[2] = 2;
    mas[3] = 4;
    mas[4] = 8;
    mas[5] = 16;
    mas[6] = 32;*/
    mas.push_back(0);
    mas.push_back(1);
    mas.push_back(2);
    mas.push_back(4);
    mas.push_back(8);
    mas.push_back(16);
    mas.push_back(32);
    for (i = 7;i <= n;i++)
    {
        //mas[i] = (mas[i - 1] + mas[i - 2] + mas[i - 3] + mas[i - 4] + mas[i - 5] + mas[i - 6]) % m;
        mas.push_back( (mas[i - 1] + mas[i - 2] + mas[i - 3] + mas[i - 4] + mas[i - 5] + mas[i - 6]) % m);
    }
    cout<< mas[n];
}
