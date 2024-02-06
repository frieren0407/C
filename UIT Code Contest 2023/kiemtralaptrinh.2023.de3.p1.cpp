#include <bits/stdc++.h>
using namespace std;
int main(){
    char s[2][2];
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cin >> s[i][j];
        }
    }
    int dem = 0;
    bool hehe = true;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            if (s[i][j] == '#') {
                dem++;
            }
        }
    }
    if (dem == 0 || dem == 1) {
        cout << "No";

    }
    else{
    if (s[0][0] == s[1][1] && s[0][0] == '#' && s[0][1] == s[1][0] && s[0][1] == '.') {
        cout << "No";
        hehe = false;
    }
    else if (s[0][0] == s[1][1]  && s[0][0] == '.' && s[0][1] == s[1][0] && s[0][1] == '#') {
        cout << "No";
        hehe = false;
    }
    if (hehe) cout << "Yes";
    }
}