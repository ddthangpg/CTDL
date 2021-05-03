#include<iostream>
using namespace std;
void swap(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
void selection(int a[],int n){
	int count=1;
	for(int i=0;i<n-1;i++){
		int vtmin=i;
		for(int j=i+1;j<n;j++){
			if(a[vtmin]>a[j]) vtmin=j;
		}
		swap(&a[i],&a[vtmin]);
		cout<<"Buoc "<<count<<":";
		count++;
		for(int j=0;j<n;j++) cout<<a[j]<<" ";
		cout<<endl;
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int n,a[100]; cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	selection(a,n);
	return 0;
}

