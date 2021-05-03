#include<iostream>
using namespace std;
int N,S,M;
int re(){
	if(M>N||(N*6)<(M*7)) return -1;
	else{
		int a=M*S;
		if(a%N==0) return a/N;
		else return a/N+1;
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		cin>>N>>S>>M;
		cout<<re()<<endl;
	}
	return 0;
}

