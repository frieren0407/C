#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0;
        int n = word1.size() + word2.size();
        while(i < word1.size() && i < word2.size()){
            result += word1[i];
            result += word2[i];  //cách dùng += để nối chuỗi
            i++;
            
        }
        if (i < n){
                result += word1.substr(i);
                result += word2.substr(i);
        }
        return result;
    }
};
int main(){
    Solution s;
    string a;
    cin >> a;
    string b;
    cin >> b;
    string hehe = s.mergeAlternately(a, b);
    cout << hehe << endl;
}