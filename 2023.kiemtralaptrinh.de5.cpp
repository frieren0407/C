#include <bits/stdc++.h>
using namespace std;
#define MAX 100
void NhapMaTran(float a[MAX][MAX], int &n, int &m)
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
} // quốc ơi làm ơn thuộc cái hàm nhập ma trận
bool SoSanhMaTran(float a[MAX][MAX], float b[MAX][MAX], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != b[i][j])
            {
                return false;
            }
        }
    }
    return true;
}   
// so sánh nhớ dùng hàm chứ đừng viết trực tiếp
bool SoSanhMaTranTuyChon(float a[MAX][MAX], float b[MAX][MAX], int tao, int may, int Hb, int Wb)
{
    for (int i = 0; i < Hb; i++)
        for (int j = 0; j < Wb; j++)
            if (a[tao + i][may + j] != b[i][j]){
                return false;
            }
    return true;
}
// so sánh tùy chọn nhớ dùng tao + i, may + j chứ đừng viết trực tiếp
int main()
{
    int Ha, Wa;
    float a[MAX][MAX];
    NhapMaTran(a, Ha, Wa);
    int Hb, Wb;
    float b[MAX][MAX];
    NhapMaTran(b, Hb, Wb);
    if (Ha == Hb && Wa == Wb)
    {
        if (SoSanhMaTran(a, b, Ha, Wa) != true)
        {
            cout << "NO";
        }
        else if (SoSanhMaTran(a, b, Ha, Wa) == true)
        {
            cout << "YES";
        }
    }
    // xét điều kiện dùm tao
    else
    {
        bool DinhNghia = false;
        for (int i = 0; i < Ha - Hb + 1; i++)
        {
            for (int j = 0; j < Wa - Wb + 1; j++)
            {
                if (a[i][j] == b[0][0])
                {
                    if (SoSanhMaTranTuyChon(a, b, i, j, Hb, Wb) == true)
                    {
                        DinhNghia = true;
                        break;
                    }
                    // nhớ tách điều kiện a[i][j] == b[0][0] và SoSanhMaTranTuyChon(a, b, i, j, Hb, Wb) == true
                }
            }
            if (DinhNghia){
                break;
            }
        }
        if (DinhNghia)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}
//haiz học ngu như bò mà bày đặt học IT