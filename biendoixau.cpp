#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int f[102][102];
		string s1,s2;
		cin>>s1>>s2;
		int a=s1.size(),b=s2.size();
		for(int i=1;i<=a;i++) f[i][0]=i;
		for(int i=1;i<=b;i++) f[0][i]=i;
		for(int i=1;i<=a;i++){
			for(int j=1;j<=b;j++){
				int t;
				if(s1[i-1]==s2[j-1]) t=0;
				else t=1;
				f[i][j]=min(f[i-1][j-1]+t,min(f[i-1][j],f[i][j-1])+1);				
		//		if(s1[i-1]==s2[j-1]) f[i][j]=f[i-1][j-1];
		//		else f[i][j]=min(f[i-1][j-1],min(f[i-1][j-1],f[i][j-1]))+1;
			}
		}
		cout<<f[a][b]<<endl;
	}	
	return 0;
}

