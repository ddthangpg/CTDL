#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//void nhap(int a[],int n){
//	for(int i=0;i<n;i++) cin>>a[i];
//}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int m,n,k,count=0; cin>>m>>n>>k;
//		int *a=new int[m],*b=new int[n],*re=new int[m+n];
//		nhap(a,m); nhap(b,n);
//		int i=0,j=0;
//		a[m]=b[n]=10000000;
//		while(1){
//			if(a[i]<a[j]){
//				re[count]=a[i];
//				i++;
//			}else{
//				re[count]=b[j];
//				j++;
//			}
//			if(count==k){
//				cout<<re[count]<<endl;
//				break;
//			}
//			count++;
//		}
		vector<int> v;
		int a;
		for(int i=0;i<m+n;i++){
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		cout<<v[k-1]<<endl;
	}	
	return 0;
}

