#include<iostream>
using namespace std;
long long re(string s){
	long long sum=0,a=0;
	for(int i=1;i<=s.size();i++){
		for(int j=0;j<s.size()-i+1;j++){
			a=0;
			for(int k=j;k<j+i;k++){
				a=a*10+s[k]-'0';
			}
			sum+=a;
		}
	}
	return sum;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<re(s)<<endl;
	}	
	return 0;
}

