#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long hieu = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            hieu += a[i];
        }
        else
        {
            hieu -= a[i];
        }
    }
    long long nguoclai = - hieu;
    cout << nguoclai;
    return 0;
}