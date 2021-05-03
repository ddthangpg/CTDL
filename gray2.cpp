#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		string bin="",gr;
		cin>>gr;
		bin+=gr[0];
		for(int i=1;i<gr.length();i++){
			if(bin[i-1]!=gr[i]) bin+="1";
			else bin+="0";
		}
		cout<<bin<<endl;
	}	
	return 0;
}

