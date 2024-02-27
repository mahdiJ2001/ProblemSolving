#include<bits/stdc++.h>
using namespace std;

int t,n,a[100001],cur; 


int main(){
	cin>>t;
	while(t--){
		cin>>n;
		cur=0;
		for(int i=1;i<=n;i+=2){
			for(int j=i;j<=n;j=j*2){
				a[cur++]=j;	
			}
		}	
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	
}

