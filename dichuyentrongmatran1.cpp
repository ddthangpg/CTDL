#include<iostream>
#include<string>
using namespace std;
int ok,n;
string s;
void re(int a[][100],int i,int j){
	if(i==n-1&&i==j){
		ok=1;
		cout<<s<<" ";
	}
	if(a[i+1][j]==1){
		s+="D";
		re(a,i+1,j);
		s.erase(s.end()-1);
	}
	if(a[i][j+1]==1){
		s+="R";
		re(a,i,j+1);
		s.erase(s.end()-1);
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int a[100][100];
		ok=0; s="";
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cin>>a[i][j];
		}
		if(a[0][0]==0) cout<<"-1";
		else{
			re(a,0,0);
			if(!ok) cout<<"-1";
		}
		cout<<endl;
	}
	return 0;
}

