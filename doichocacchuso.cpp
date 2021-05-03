#include<iostream>
#include<algorithm>
using namespace std;
int ss(int a,int b){
	return a>b? 1 : 0;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		string s,check;
		int n;
		cin>>n>>s;
		check=s;
		sort(check.begin(),check.end(),ss);
		int st=0;
		int l=s.size();
		while(n){
			int ok=0;
			int tmp=st;
			for(int i=st+1;i<l;i++){
				if(s[tmp]<=s[i]){
					tmp=i;
				}
			}
			for(int i=st;i<l;i++){
				if(s[tmp]>s[i]&&tmp>i){
					swap(s[tmp],s[i]);
					ok=1;
					break;
				}
			}
			st++;
			if(ok) n--;
			if(s==check) break;
		}
		cout<<s<<endl;
	}	
	return 0;
}

