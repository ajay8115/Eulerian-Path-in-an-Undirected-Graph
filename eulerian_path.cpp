#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

int eulerPath(int n, vector<vector<int>> g)
{
    vector<int> deg(n, 0);
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (g[i][j] == 1)
            {
                cnt++;
            }
        }
        deg[i] = cnt;
    }

    int oddvert = 0;
    for (int i = 0; i < n; i++)
    {
        if (deg[i] % 2 == 1)
        {
            oddvert++;
        }
    }

    if (oddvert == 2)
    {
        return 1;
    }

    return 0;
}