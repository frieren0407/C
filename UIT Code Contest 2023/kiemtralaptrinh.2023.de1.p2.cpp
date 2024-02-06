#include <bits/stdc++.h>
using namespace std;
void chuanhoa(int D[], int n){
    for(int i=0; i<n; i++){
        D[i]=D[i]%360;
    }
}
void Sort(int a[], int n){
    for(int i = 0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[j]<a[i]){
                int tempt = a[i];
                a[i] = a[j];
                a[j]=tempt;
            }
        }
    }
}
int main (){
	int n; cin >> n;
	int D[n];
	int nhat[n+1];
	nhat[0]=0;
	for(int i=0; i<n; i++) cin >> D[i];
	for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
           nhat[j]+=D[i];     //nhat1 = 90 / nhat2 = 90 + 180 / nhat 3 = 90 + 180 + 45
        }
        nhat[i+1]=0; 
	}
	chuanhoa(nhat,n+1);
	Sort(nhat,n+1);
    int goc = abs(360-abs(nhat[n]-nhat[0]));
    for(int i=0; i<=n-1; i++){
        int ss = nhat[i+1]-nhat[i];
        if(ss>goc) goc=ss;
    }
    cout << goc;
}