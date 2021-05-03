#include<iostream>
using namespace std;
int ok,n;
string s;
void re(int a[][100],int i,int j){
	if(i==n-1&&i==j){
		count++;
		ok=1;
		cout<<s<<" ";
	}
	if(a[i+1][j]==1){
		s+="D";
		
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	
	return 0;
}

