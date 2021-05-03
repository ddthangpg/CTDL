#include <iostream>
using namespace std;
void insertionSort(int a[], int n) {
    int i,key,j;	 
    for(i=0;i<n;i++){
        key=a[i]; 
        j=i-1;
        while(j>=0&&a[j]>key){ 
            a[j+1]=a[j]; 
            j=j-1; 
        } 
        a[j+1]=key;
        cout<<"Buoc "<<i<<": ";
        for(int j=0;j<=i;j++) cout<<a[j]<<" ";
        cout<<endl;
    } 
}
int main() {
    int n,a[100]; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    insertionSort(a, n); 
    return 0; 
} 
