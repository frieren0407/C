#include <bits/stdc++.h>
using namespace std;    

const unsigned long long mod = 1e9 + 7;

// Định nghĩa một struct để biểu diễn ma trận 2x2
struct matrix{
    unsigned long long a, b, c, d;
};

// Hàm nhân hai ma trận 2x2
matrix multiply(matrix A, matrix B){
    matrix C;
    C.a = (A.a*B.a + A.b*B.c) % mod;
    C.b = (A.a*B.b + A.b*B.d) % mod;
    C.c = (A.c*B.a + A.d*B.c) % mod;
    C.d = (A.c*B.b + A.d*B.d) % mod;
    return C;
}

// Hàm tính lũy thừa ma trận 2x2 với số mũ nguyên dương
matrix power(matrix a, long long b){
    matrix res;
    res.a = res.d = 1;
    res.b = res.c = 0;
    while (b > 0){
        if(b % 2)
            res = multiply(res, a);
        a = multiply(a, a);
        b >>= 1;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    // Khởi tạo ma trận Fibonacci 2x2
    matrix a;
    a.a = 1;
    a.b = 1;
    a.c = 1;
    a.d = 0;

    // Tính lũy thừa ma trận Fibonacci với số mũ n
    matrix res = power(a, n);

    // Xuất ra số Fibonacci thứ hai của dãy Fibonacci
    cout << res.b << endl;

    return 0;
}
