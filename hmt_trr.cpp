#include<iostream>
#include<cstring>
using namespace std;
int res[100];
int n, x, arr[100][100];
bool chuaxet[1000];
void out(){
    for(int i=1; i<=n; i++)
        cout<<res[i]<<" ";
    cout<<res[1];
    cout<<endl;
}
void hmt(int k){
    for(int i=1; i<=n; i++){
        if(arr[res[k-1]][i]){
            if(k==n+1&&i==x)
                out();
            else if(chuaxet[i]){
                res[k]=i;
                chuaxet[i]=false;
                hmt(k+1);
                chuaxet[i]=true;
            }
        }
    }
}
int main(){
    memset(chuaxet, true, sizeof(chuaxet));
    int k;
    cin>>n>>x;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>arr[i][j];
    res[1]=x;
    chuaxet[x]=false;
    hmt(2);
}
