#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>a(n),b(n);
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n; i++) cin>>b[i];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(b[i]<b[j]){
					swap(b[i],b[j]);
					swap(a[i],a[j]);
				}
			}
		}
		int kq=1;int hehe=b[0];
		for(int i=1; i<n; i++){
			if(hehe<=a[i] && hehe<b[i]){
				kq++;
				hehe=b[i];
			}
		}
		cout<<kq<<endl;
	}
}
