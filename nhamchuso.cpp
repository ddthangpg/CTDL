#include<iostream>
using namespace std;
int min(string a){
	int numnew=0;
	for(int i=0;i<a.length();i++){
		if(a[i]=='6') a[i]='5';
		numnew=numnew*10+a[i]-'0';
	} return numnew;
}
int max(string a){
	int numnew=0;
	for(int i=0;i<a.length();i++){
		if(a[i]=='5') a[i]='6';
		numnew=numnew*10+a[i]-'0';
	} return numnew;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	string a,b;
	cin>>a>>b;
	cout<<min(a)+min(b)<<" "<<max(a)+max(b);
	
	return 0;
}

