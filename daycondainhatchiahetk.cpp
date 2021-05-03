#include<iostream>
using namespace std;
int sum,a[100],n,k;
int re(){
	if(sum%k==0) return n;
	int kq=-1;
	int l[50000]={0};
	int dem[50000]={0};
	l[0]=1;
	for(int i=0;i<n;i++){
		for(int t=sum;t>=a[i];t--){
			if(l[t-a[i]]==1){
				l[t]=1;
				dem[t]=max(dem[t],dem[t-a[i]]+1);
			}			
		}
	}
	for(int i=0;i<=sum;i++){
		if(i%k==0) kq=max(kq,dem[i]);
	}
	return kq;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		sum=0;
		for(int i=0;i<n;i++) cin>>a[i],sum+=a[i];
		cout<<re()<<endl;
	}	
	return 0;
}
