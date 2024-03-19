#include <bits/stdc++.h>
using namespace std ; 

int main(){
	int t ; 
	cin>>t;
	while(t--){
		int n ; 
		cin>>n;
		long long a[n];
		bool b=true;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n-2;i++){
			if(a[i]<0){
				b=false;
				break;
			}
			a[i+1]-=2*a[i];
			a[i+2]-=a[i];
			a[i]=0;
			if(a[i+1]<0 || a[i+2]<0){
				b=false;
				break;
			}
		}
		if(!(a[n-1]!=0 || a[n-2]!=0) && b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	
	
	return 0 ; 
}
