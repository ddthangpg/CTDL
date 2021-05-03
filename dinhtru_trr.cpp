#include<bits/stdc++.h>
using namespace std;
int dinh,arr[100][100];
bool chuaxet[1000];
void nhap(){
    cin>>dinh;
    for(int i=0; i<dinh; i++)
        for(int j=0; j<dinh; j++)
            cin>>arr[i][j];
}
void khoiTao(){
    for(int i=0; i<dinh; i++)
    	chuaxet[i]=true;
}
void DFS(int u, int &dinhTru){
    stack<int> stk;
    stk.push(u);
    dinhTru++;
    chuaxet[u]=false;
    while(!stk.empty()){
        int s=stk.top();
        stk.pop();
        for(int i=0; i<dinh; i++)
            if(arr[s][i]&&chuaxet[i]){
                dinhTru++;
                chuaxet[i]=false;
                stk.push(s);
                stk.push(i);
                break;
            }
    }
}
void DuyetDinhTru(){
    for(int i=0; i<dinh; i++){
        chuaxet[i]=false;
        int dinhTru=0,u;
        if(i==dinh-1) u=1;
        else u=i+1;
        DFS(u, dinhTru);
        if(dinhTru!=dinh-1)
            cout<<i+1<<" ";
        khoiTao();
    }
}

int main(){
    nhap();
    khoiTao();
    DuyetDinhTru();
    return 0;
}
