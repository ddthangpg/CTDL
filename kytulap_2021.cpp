#include<iostream>
#include<vector>
using namespace std;
int a[11][11],x[100],n,re=10000,check1[100]={0};
int lcs(string &a, string &b) {
    int m = a.size(), n = b.size();
    a = ' ' + a;
    b = ' ' + b;
    vector< vector<int> > f(m+1, vector<int>(n+1, 0));
    for (int i=1; i<=m; i++) 
		for (int j=1; j<=n; j++) {
        	if (a[i] == b[j] && a[i]!=' ') f[i][j] = f[i-1][j-1] + 1;
        	else f[i][j] = max(f[i-1][j], f[i][j-1]);
    }
    return f[m][n];
}
void ktra(){
	int sum=0;
	for(int i=1;i<n;i++) sum+=a[x[i-1]][x[i]];
	re=min(re,sum);
}
void try1(int i){
	for(int j=0;j<n;j++){
		if(!check1[j]){
			x[i]=j;
			check1[j]=1;
			if(i==n-1) ktra();
			else try1(i+1);
			check1[j]=0;
		}
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	cin>>n;
	string s;
	vector<string> v;
	for(int i=0;i<n;i++){
		cin>>s;
		v.push_back(s);
	}
	for(int i=0;i<n;i++) a[i][i]=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			a[j][i]=lcs(v[i],v[j]);
			a[i][j]=a[j][i];
		}
	}
	try1(0);
	cout<<re;
	return 0;
}

