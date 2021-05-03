#include<iostream>
#include<string>
using namespace std;
int n,a[30];
void inKQ(){
	if(n%2==0){
		for(int i=0;i<n/2;i++) cout<<a[i]<<" ";
		for(int i=n/2-1;i>=0;i--) cout<<a[i]<<" ";
		cout<<endl;
	}else{
		for(int j=0;j<=1;j++){
			for(int i=0;i<n/2;i++) cout<<a[i]<<" ";
			cout<<j<<" ";
			for(int i=n/2-1;i>=0;i--) cout<<a[i]<<" ";
			cout<<endl;			
		}		
	}
}
void try1(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n/2-1) inKQ();
		else try1(i+1);
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	cin>>n;
	if(n==1) cout<<"0"<<endl<<"1"<<endl;
	else try1(0);	
	return 0;
}

