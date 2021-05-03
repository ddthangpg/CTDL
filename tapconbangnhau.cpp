#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,a[101],sum=0; cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%2==1) cout<<"NO";
		else{
			sum/=2;
			int L[10001]={0};
			L[0]=1;
			for(int i=0;i<n;i++){
				L[a[i]]=1;
				for(int k=sum;k>=a[i];k--){
					if(L[k-a[i]]==1) L[k]=1;
				}
			}
			if(L[sum]==1) cout<<"YES";
			else cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}

