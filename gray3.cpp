#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		string bin,gr="";
		cin>>bin;
		gr+=bin[0];
		for(int i=1;i<bin.size();i++){
			if(bin[i-1]!=bin[i]) gr+="1";
			else gr+="0";
		}
		cout<<gr<<endl;
	}	
	return 0;
}

