#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
		int n,A[100000];
		long long re,a,b,c,d;
		cin>>n; 
		for(int i=0;i<n;i++) cin>>A[i];
		sort(A,A+n);
		a=A[n-1]*A[n-2];
		b=A[n-1]*A[n-2]*A[n-3];
		c=A[0]*A[1]*A[n-1];
		d=A[0]*A[1];
		re=max(a,b);
		re=max(re,c);
		re=max(re,d);
		cout<<re<<endl;	
		return 0;
}

