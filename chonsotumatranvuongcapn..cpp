#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> >re;
int a[20][20],n,k,check[20]={};
int x[20],count=0;
void chonKQ(){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=a[i][x[i]];
	} 
	if(sum==k){
		count++;
		re.resize(re.size()+1);
		for(int i=1;i<=n;i++)
			re[re.size()-1].push_back(x[i]);
	}
}
void backTrack(int i){
	for(int j=1;j<=n;j++){
		if(!check[j]){
			check[j]=1;
			x[i]=j;
			if(i==n) chonKQ();
			else backTrack(i+1);
			check[j]=0;
		}
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) cin>>a[i][j];
	backTrack(1);
	cout<<count<<endl;
	for(int i=0;i<count;i++){
		for(int j=0;j<n;j++) cout<<re[i][j]<<" ";
		cout<<endl;
	}	
	return 0;
}

