#include<iostream>
#include<queue>
using namespace std;
int re(){	
	int a,b,kq=99999;
	cin>>a>>b;
	if(a>=b) return a-b;
	int check[10001]={0};
	int dem[10001]={0};
	queue<int> qq;
	qq.push(a);
	dem[a]=1;
	while(1){
		int k=qq.front(); qq.pop();
		if(check[k]==0&&k>0){
			check[k]=1;
			if(k==b){
				kq=min(kq,dem[k]);
				return kq;
			}
			else if(k>b) kq=min(kq,dem[k]+k-b);
			else if(k<b){
				dem[k-1]++;
				dem[k*2]++;
				qq.push(k-1);
				qq.push(2*k);
			}
		}
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--) cout<<re()<<endl;
	return 0;
}

