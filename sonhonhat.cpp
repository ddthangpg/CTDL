#include<iostream>
using namespace std;
string re(int s,int d){
	if(d*9<s) return "-1";
	string kq="";
	int so9=s/d;
	while(s>9){
		kq+="9";
		d--;
		s-=9;
	}
	char x=s;
	if(d>1&&s>1){
		kq.insert(kq.begin(),x+48-1);
		x=1; d--;
	}
	while(d>1){
		kq.insert(kq.begin(),'0');
		d--;
	}
	
	kq.insert(kq.begin(),x+48);
	return kq;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int s,d;
		cin>>s>>d;
		cout<<re(s,d)<<endl;
	}	
	return 0;
}

