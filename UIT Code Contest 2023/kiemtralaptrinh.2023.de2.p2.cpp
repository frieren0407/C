#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    init();
    int n;
    cin>>n;
    int dem = 0;
    
    for (int i = 1; i < n; i++){
        for (int j = 1; j < n; j++){
            if (i * j + (n - i*j)/j == n){
                dem++;
            }
        }
    }
    cout<<dem*2;
}