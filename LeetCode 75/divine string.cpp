class Solution {
public:
    int gcdOfStrings(int strlen1, int strlen2){
        if (strlen1 < strlen2){
            return gcdOfStrings(strlen2, strlen1);
        }
        if (strlen2 == 0){
            return strlen1;
        }
        return gcdOfStrings(strlen2, strlen1 % strlen2);
    }
    string gcdOfStrings(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        int gcd = gcdOfStrings(n, m);
        string result = str1.substr(0, gcd);
        for (int i = 0 ; i < n ; i+=gcd){
            if (str1.substr(i, gcd) != result){
                return "";
            }
        }
        for (int i = 0 ; i < m ; i+=gcd){
            if (str2.substr(i, gcd) != result){
                return "";
            }
        }
        return result;
        
    }
    
};