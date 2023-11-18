#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long Sophong;
    cin >> Sophong;
    long long Teo;
    cin >> Teo;
    long long TienTi;
    cin >> TienTi;
    long long PhongDuTien = 0;
    vector<long long> a(Sophong);
    for (int i = 0; i < Sophong; i++)
    {
        cin >> a[i];
    }
    
    long long KhoangCach = -1;

    for (int i = 0; i < Sophong; i++) {
        if (a[i] <= TienTi && a[i] != 0) {
            if (KhoangCach == -1 || abs(i - Teo + 1) * 10 < KhoangCach) {
                KhoangCach = abs(i - Teo + 1) * 10;
            }
        }
    }
    cout<<KhoangCach;
    return 0;
}