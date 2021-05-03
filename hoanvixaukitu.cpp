#include<iostream>
#include<cstring>
using namespace std;
string s;
int cc[100],a[100];
void inKQ(){
	for(int i=1;i<=s.size();i++) cout<<(char)a[i];
	cout<<" ";
}
void try1(int j){
	for(int i=0;i<s.size();i++){
		if(cc[i]==0){
			a[j]=(int)s[i];
			cc[i]=1;
			if(j==s.size()) inKQ();
			else try1(j+1);
			cc[i]=0;
		}
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		memset(cc,0,100);
		cin>>s;
		try1(1);
		cout<<endl;
	}
	return 0;
}

