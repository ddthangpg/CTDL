#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int f[101][101][101];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		memset(f,0,sizeof(f));
		vector<string> v;
		int a,b,c;
		string s1,s2,s3;
		cin>>a>>b>>c>>s1>>s2>>s3;
		for(int i=1;i<=a;i++){
			for(int j=1;j<=b;j++){
				for(int k=1;k<=c;k++){
					if(s1[i-1]==s2[j-1]&&s2[j-1]==s3[k-1]) f[i][j][k]=f[i-1][j-1][k-1]+1;
					else{
						f[i][j][k]=max(f[i-1][j][k],max(f[i][j-1][k],f[i][j][k-1]));
					}
				} 
			}
		}
		cout<<f[a][b][c]<<endl;
	}	
	return 0;
}


