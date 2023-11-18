#include <iostream>
#include <string>
using namespace std;

bool checkABandBA(string s) {
    size_t foundAB = s.find("AB");
    if (foundAB == string::npos) {
        return false;
    }

    size_t foundBA = s.find("BA", foundAB + 2); 
    if (foundBA == string::npos) {
        return false; 
    }
    return true;
}
bool checkBAandAB(string s) {
    size_t foundBA = s.find("BA");
    if (foundBA == string::npos) {
        return false;
    }

    size_t foundAB = s.find("AB", foundBA + 2); 
    if (foundAB == string::npos) {
        return false; 
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    if (checkABandBA(s)|| checkBAandAB(s)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
