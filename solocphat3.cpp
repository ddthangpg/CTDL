#include<iostream>
#include<queue>
#include<stack>
#include<cmath>
using namespace std;
void re(int n){
	queue <string> st;
	stack <string> ketqua;
	st.push("6");
	st.push("8");
	while(st.front().size()<=n){
		string s=st.front();
		ketqua.push(s);
		st.pop();
		st.push(s+"6");
		st.push(s+"8");
	}
	while(!ketqua.empty()){
		cout<<ketqua.top()<<" ";
		ketqua.pop();
	}
	cout<<endl;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<pow(2,n+1)-2<<endl;
		re(n);
	}
	return 0;
}

