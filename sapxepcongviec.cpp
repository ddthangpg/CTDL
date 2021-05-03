#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >CV(1001);
int ss(pair<int,int>a,pair<int,int>b){
	if(a.second<b.second) return 1;
	return 0;	
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int check[1001]={},n;
		cin>>n;
		for(int i=0;i<n;i++) cin>>CV[i].first;
		for(int i=0;i<n;i++) cin>>CV[i].second;
		sort(CV.begin(),CV.begin()+n,ss);
		int re=1,k=CV[0].second;
		for(int i=1; i<n; i++){
			if(k<=CV[i].first && k<CV[i].second){
				re++;
				k=CV[i].second;
			}
		}	
		cout<<re<<endl;	
	}
	return 0;
}
//#include<bits/stdc++.h>
//using namespace std;
//struct CV{
//	int x,y;
//};
//int ss(CV a,CV b){
//	if(a.y<b.y) return 1;
//	return 0;	
//}
//int main(){
//	cin.tie(0); ios_base::sync_with_stdio(false);
//	int t; cin>>t;
//	while(t--){
//		int check[1001]={},n;
//		cin>>n;
//		CV a[1001];
//		for(int i=0;i<n;i++) cin>>a[i].x;
//		for(int i=0;i<n;i++) cin>>a[i].y;
//		sort(a,a+n,ss);
//		int re=1,k=a[0].y;
//		for(int i=1; i<n; i++){
//			if(k<=a[i].x&& k<a[i].y){
//				re++;
//				k=a[i].y;
//			}
//		}	
//		cout<<re<<endl;	
//	}
//	return 0;
//}

