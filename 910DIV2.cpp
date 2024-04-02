#include <bits/stdc++.h>
using namespace std ; 


int main(){
	int t ; 
	cin>>t;
	while(t--){
		int n ; 
		cin>>n;
		vector<long long> a(n) ;
		for(int i=0;i<n;i++)
			cin>>a[i];
		long long next=a[n-1] ,c=0;
		for(int i=n-1;i>=0;i--){
			if( a[i] <= next )
				next=a[i];
			else{
				long long q=(a[i]+next-1)/next;
				c+=q-1;
				next=a[i]/q;
			}
		}
		cout<<c<<endl;
	}
	return 0 ; 
}
