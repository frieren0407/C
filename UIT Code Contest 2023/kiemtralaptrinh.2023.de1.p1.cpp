#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main() {
    int hehe;
    cin>>hehe;
    vector<int> a;
    vector<int> b;
    int n;
    for (int i = 0; i < hehe; i++){
        cin>>n;
        a.push_back(n);
    }
    for (int i = 0; i < hehe; i++){
        cin>>n;
        b.push_back(n);
    }
    auto max_value = max_element(a.begin(), a.end());
    auto min_value = min_element(b.begin(), b.end());
    cout<<max(0, *min_value - *max_value + 1);
}