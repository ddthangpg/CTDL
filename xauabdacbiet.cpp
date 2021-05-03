#include<iostream>
#include<vector>
using namespace std;
vector<string> v;
int n,k,re=0;
string a="";
int check1(){
	int count=0,d=0;
	for(int i=0;i<n;i++){
		if(a[i]=='A') d++;
		else d=0;
		if(d==k) count++;
		if(d>k) return 0;
	}
	if(count==1)  return 1;
	return 0;
}
void inKQ(){
	if(check1()){
		v.push_back(a);
		re++;
	}
}
void try1(int i){
	for(int j='A';j<='B';j++){
		a[i]=j;
		if(i==n-1) inKQ();
		else try1(i+1);
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	cin>>n>>k;
	for(int i=0;i<n;i++) a+="A";
	try1(0);
	cout<<re<<endl;
	for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
	return 0;
}

