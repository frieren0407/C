#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cacso(n);

    for (int i = 0; i < n; ++i) {
        cin >> cacso[i];
    }

    for (int i = 0; i < n; ++i) {
        int num = cacso[i];

        if (num == 2) {
            cout << "1 2" << endl;
            continue;
        }

        int x = static_cast<int>(sqrt(num));
        while (true) {
            if (num % x == 0) {
                cout << x << " " << num / x << endl;
                break;
            }
            x--;
        }
    }

    return 0;
}
