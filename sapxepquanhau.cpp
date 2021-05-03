#include <iostream>
using namespace std;
int	n,X[100],col[100],xuoi[100],nguoc[100],count=0;
void print(){
	cout << "\n" << count++ << ": ";
	for(int j=1; j<=n; j++) cout << X[j] << " ";
}
void BackTrack(int i){
	for(int j=1; j<=n; j++){
		if(col[j]&&xuoi[i-j+n]&&nguoc[i+j-1]){
			X[i]=j;		
			col[j]=0;		
			xuoi[i-j+n]=0;
			nguoc[i+j-1]=0;	
			if(i==n)		
				print();
			else			
				BackTrack(i+1);
			col[j]=1;	
			xuoi[i-j+n]=1;
			nguoc[i+j-1]=1;
		}
	}
}
int main() {
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int j=1; j<=2*n-1; j++){
			col[j]=1;	xuoi[j]=1;	nguoc[j]=1;
		}
		BackTrack(1);
	}
}
