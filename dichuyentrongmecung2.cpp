#include<iostream>
using namespace std;
int ok,n;
string s;
void re(int a[][100],int i,int j,int f[][100]){
	if(i==n-1&&j==n-1){
		ok=1;
		cout<<s<<" ";
	}else{
		if(a[i+1][j]==1&&f[i][j]==0&&i<n-1){
			s+="D";
			f[i][j]=1;
			re(a,i+1,j,f);
			s.erase(s.end()-1);
			f[i][j]=0;
		}
		if(a[i][j-1]==1&&f[i][j]==0&&j>0){
			s+="L";
			f[i][j]=1;
			re(a,i,j-1,f);
			s.erase(s.end()-1);
			f[i][j]=0;
		}
		if(a[i][j+1]==1&&f[i][j]==0&&j<n-1){
			s+="R";	
			f[i][j]=1;
			re(a,i,j+1,f);
			s.erase(s.end()-1);
			f[i][j]=0;
		}
		if(a[i-1][j]==1&&f[i][j]==0&&i>0){
			s+="U";
			f[i][j]=1;
			re(a,i-1,j,f);
			s.erase(s.end()-1);
			f[i][j]=0;
		}
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int f[100][100];
		for(int i=0;i<50;i++){
			for(int j=0;j<50;j++) f[i][j]=0;
		}
		int a[100][100];
		ok=0; s="";
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cin>>a[i][j];
		}
		if(a[0][0]==0) cout<<"-1";
		else{
			re(a,0,0,f);
			if(!ok) cout<<"-1";
		}
		cout<<endl;
	}
	return 0;
}

