#include<iostream>
#include<stack>
using namespace std;
int n,a[30][30];
int check[100]={};
void sup(){
    for(int i=0;i<50;i++) check[i]=0;
}
void DFS(int u){
    stack<int> st;
    check[u]=1;
    st.push(u);
    while(!st.empty()){
        int s=st.top();
        st.pop();
        for(int i=1;i<=n;i++){
            if(a[s][i]==1&&check[i]==0){
                check[i]=1;
                st.push(s);
                st.push(i);
                break;
            }
        }
    }
    
}
int ltm(){
    for(int i=1;i<=n;i++){
        sup();
        DFS(i);
        for(int j=1;j<=n;j++){
            if(check[j]==0) return 0;
        }
    }
    return 1;
}
int main(){
    cin>>n;
    sup();
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    if(ltm()) cout<<"strongly connected"<<endl;
    else cout<<"not strongly connected"<<endl;
    return 0;
}
