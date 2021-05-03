#include<iostream>
int binaryS(int arr[],int l,int r,int x){
    if(r>=l){ 
        int mid=(l+r)/2;
        if (arr[mid] ==x) return mid;
        if (arr[mid]>x) return binaryS(arr,l,mid-1,x); 
        return binaryS(arr,mid+1,r,x); 
    }
    return 0; 
}
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int a[200000],n,x;
		cin>>n>>x;
		for(int i=0;i<n;i++) cin>>a[i];
		if(binaryS(a,0,n-1,x)) cout<<binaryS(a,0,n-1,x)+1<<endl;
		else cout<<"NO"<<endl;
	}	
	return 0;
}

