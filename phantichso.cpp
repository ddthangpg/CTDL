#include<iostream>
using namespace std;
int n,k,x[100],ok=1;
void in(){
	cout<<"(";
	for(int i=1;i<k;i++) cout<<x[i]<<" ";
	cout<<x[k]<<") ";
}
void sinh(){
	int r,s,d,i=k;
	while(i>0&&x[i]==1) i--;
	if(i>0){
		x[i]--;
		d=k-i+1;
		r=d/x[i];
		s=d%x[i];
		k=i;
		if(r>0){
			for(int j=i+1;j<=i+r;j++) x[j]=x[i];
			k+=r;
		}
		if(s>0){
			k++;
			x[k]=s;
		}
	}else ok=0;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		cin>>n;
		k=1; ok=1;
		x[k]=n;
		while(ok==1){
			in();
			sinh();
		}
		cout<<endl;
	}
	return 0;
}

