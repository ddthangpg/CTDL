#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int t=a;;a=b;b=t;
}
void bubble(int a[],int n){
	int ok;
	for(int i=0;i<n;i++){
		ok=0;
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				ok=1;
			}
		}
		if(ok==0) break;
		else{
			cout<<"Buoc "<<i+1<<": ";
			for(int j=0;j<n;j++) cout<<a[j]<<" ";
			cout<<endl;
		}
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int n,a[100]; cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	bubble(a,n);
	return 0;
}

