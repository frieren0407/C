#include <bits/stdc++.h>
#pragma GCC optimize("02")

using namespace std;
using ll = long long;

void init()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll dp[200005];

void sieve(int n)
{
    for (int i=1; i<=n; i++)
    {
        for (int j=i; j<=n; j+=i)
        {
            dp[j]++;
        }
    }
}

int main()
{
    init();
    int n; cin >> n;
    sieve(n);
    ll ans = 0;
    for (int i=1; i<= n; i++)
    {
        ans += (dp[i] * dp[n-i]);
    }
    cout << ans;
}