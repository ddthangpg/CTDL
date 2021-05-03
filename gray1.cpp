#include<iostream>
#include<vector>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t;cin>>t;
	while(t--){
		int n,count=2; cin>>n;
		vector<string> gray(2);
		for(int i=0;i<n-1;i++){
			gray[0]+="0";
			gray[1]+="0";
		}
		gray[0]+="0";
		gray[1]+="1";
		cout<<gray[0]<<" "<<gray[1]<<" ";
		for(int i=n-2;i>=0;i--){
			int k=gray.size();
			for(int j=k-1;j>=0;j--){
				gray.push_back(gray[j]);
				gray[count][i]='1';
				cout<<gray[count]<<" ";
				count++;
			}
		}
		cout<<endl;
		gray.clear();
	}	
	return 0;
}

