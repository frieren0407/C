#include <iostream>
using namespace std;
int uocchung(long long a, long long b){
    if (b==0){
        return a;
    }
    return uocchung(b, a%b);
}
void rutgon(long double &a, long double &b){
    long long c = uocchung(a, b);
    a = a/c;
    b = b/c;
}
int main(){
    long double a, b, c, d;
    cin >> a >> b >> c >> d;
    long double j, k;
    if (b==d){
        j = b;
        k = a+c;
    }
    else{
        j = b*d;
        k = a*d+c*b;
    }
    rutgon(k, j);
    cout << k << " " << j;
    return 0;
}