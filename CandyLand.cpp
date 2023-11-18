#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Khai báo biến số test case và vector lưu kết quả
    int n, m;
    int Socase;
    cin >> Socase;
    vector<long long> ketqua;
    
    // Duyệt qua từng test case
    for (int i = 0; i < Socase; ++i)
    {
        // Nhập số lượng người và số tiền mỗi người đóng
        cin >> n >> m;
        
        // Tạo vector lưu số tiền mỗi người đóng
        vector<long long> songuoi(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> songuoi[j];
        }
        
        // Tính tổng số tiền cần thu để tổ chức tiệc
        long long party = 0;
        for (auto &s : songuoi)
        {
            if (m % (s + 1) == 0)
            {
                // Nếu số tiền chia hết cho (s + 1) thì chỉ cần chia và cộng vào tổng
                party = party + m / (s + 1);
            }
            else
            {
                // Nếu không chia hết thì chia lẻ, cộng phần nguyên và phần dư
                party = party + m / (s + 1) + m % (s + 1);
            }
        }
        
        // Lưu tổng số tiền cần thu vào vector kết quả
        ketqua.push_back(party);
    }
    
    // In ra kết quả từ vector kết quả
    for (int i = 0; i < Socase; ++i){
        cout << ketqua[i] << endl;
    }
    
    return 0;
}
