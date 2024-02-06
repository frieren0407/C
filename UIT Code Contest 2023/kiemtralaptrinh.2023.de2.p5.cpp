#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define fi first
#define se second
#define foru(i,a,b) for(int i = a; i <= b; i++)
#define ford(i,a,b) for(int i = a; i >= b; i--)

void init()
{
    //freopen(".inp","r",stdin);
    //freopen(".out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}
const int M=1001;
vector<int> d;
void nhap(int m,int n,int x[M][M])
{
    foru(i,1,m)
    {
        foru(j,1,n)
        cin>>x[i][j];
    }
}
int cc(int AA[M][M],int BB[M][M],int n,int ja,int jb,int pp )
{
    int l=2,v=0;
    while(l<=pp && v<n )
    {
       // cout<<d[v]<<" "<<ja<<" "<<AA[d[v]][ja]<<endl;
        //cout<<l<<" "<<jb<<" "<<BB[l][jb]<<endl;
        if(AA[d[v]][ja]==BB[l][jb])
        {
            l++;
            v++;
        }
        else return 0;
    }
        if(l-1==pp && v==n) return 1;
        return 0;
    }
    bool sosanh2mang(int a[M][M], int b[M][M], int m, int n){
        bool hehe = true;
        for (int i = 0; i<m; i++){
            for (int j = 0; j<n; j++){
                if (a[i][j] != b[i][j]){
                    return false;
                    hehe = false;
                    break;
                }
            }
            if (hehe == false){
                break;
            }
        }
        return true;
    }
    int sosanh(int s,int e,int A[M][M],int  B[M][M],int m,int n,int p,int q)
    {
        
        int t2=2,t1=s+1;
        d.clear();
        while(t1<=m && t2<=p)
        {
            int ok=0;
            if(A[t1][e]==B[t2][1])
            {
                t2+=1;
                ok=1;

            }
            if(ok==1) d.pb(t1);
            t1+=1;
        }
        //cout<<d.size()<<","<<t2<<endl;
        //foru(f,0,d.size()-1) cout<<d[f]<<" ";
        //cout<<endl;
        if(t2-1==p)
        {
            int u=2,ok=0,n=d.size(),c=0;
            foru(k,e+1,m)
            {
                if(A[s][k]==B[1][u])
                {
                    //cout<<s<<" "<<k<<" "<<A[s][k]<<endl;
                    //cout<<1<<" "<<u<<" "<<B[1][u]<<endl;
                    if(cc(A,B,n,k,u,p)==1) u++;
                    //cout<<u<<endl;
                }
               // if (u-1==q) return 1;
            }
            if(u-1==q) return 1;
            return 0;
        }
        return 0;
    }
    int ha,hb,wa,wb,a[M][M],b[M][M];
    int main()
    {
        init();
        cin>>ha>>wa;
        nhap(ha,wa,a);
        cin>>hb>>wb;
        nhap(hb,wb,b);
        d.resize(ha+33);
        if (ha == hb && wa == wb){
            if (sosanh2mang(a, b, ha, wa)){
                cout<<"Yes";
            } 
            else{
                cout<<"No";
            }  
        }
        else // Add 'if' statement here
        {
            foru(i,1,ha)
            {
                foru(j,1,wa)
                {
                    if(a[i][j]==b[1][1])
                    {
                        //cout<<i<<" "<<j<<endl<<sosanh(i,j,a,b,ha,wa,hb,wb)<<endl;
                        if(sosanh(i,j,a,b,ha,wa,hb,wb)==1)
                        {
                            cout<<"Yes";
                            return 0;
                        }

                    }

                }
            }
            //cout<<sosanh(2,2,a,b,ha,wa,hb,wb);
            
        }
    cout<<"No";
            return 0;
    }
/*
4 4
2 4 6 8
1 3 5 7
2 5 8 9
7 8 9 10
2 2
3 5
8 9
*/