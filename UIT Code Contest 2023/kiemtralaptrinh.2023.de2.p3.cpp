#include <bits/stdc++.h>
#pragma GCC optimize("02")

using namespace std;
using ll = long long;

ll mod = (ll)(1e9+7);

void init()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll suffix_sum[200006], a[200006];

int main()
{
    init();
    int n; cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    suffix_sum[n-1] = a[n-1];
    for (int i=n-2; i>=0; i--)
    {
        suffix_sum[i] = suffix_sum[i+1]%mod + a[i]%mod;
        suffix_sum[i] %= mod;
    }
    ll sum = 0;
    for (int i=0; i<n-1; i++)
    {
        sum = sum%mod + (a[i]*suffix_sum[i+1])%mod;
        sum %= mod;
    }
    cout << sum;
}