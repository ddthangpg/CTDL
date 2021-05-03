#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	int cc=1;
	cin.ignore();
	while(t--){
		string s,a="";
		getline(cin,s);
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]==' ') break;
			else a.insert(a.begin(),s[i]);
		}
		int ok=0,ch;
		for(int i=a.size()-1;i>0;i--){
			if(a[i]>a[i-1]){
				ok=1;
				char x='9';
				for(int j=i;j<a.size();j++){
					if(a[j]<=x&&a[j]>a[i-1]){
						 x=a[j];
						 ch=j;
					}
				}
				swap(a[i-1],a[ch]);
				sort(a.begin()+i,a.end());
				break;
			}
		}
		if(ok==0) cout<<cc<<" BIGGEST"<<endl;
		else cout<<cc<<" "<<a<<endl;
		cc++;
	}	
	return 0;
}

