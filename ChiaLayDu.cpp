#include <iostream>
#include <set>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;

    set<long long> remainders; 

    for (long long i = 0; i < N; i++) {
        long long num;
        cin >> num;
        remainders.insert(num % K); 
    }

    cout << remainders.size(); 

    return 0;
}
