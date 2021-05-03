#include<iostream> 
using namespace std;
void swap(int &a,int &b){
	int t=a;
	a=b;
	b=t;	
}
void sx(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]) swap(a[i],a[j]);
		}
		cout<<"Buoc "<<i+1<<": ";
		for(int j=0;j<n;j++) cout<<a[j]<<" ";
		cout<<endl;
	}
}
int main(){ 
	int n,a[1000]; cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	sx(a,n);
	return 0; 
}
