#include<bits/stdc++.h>
using namespace std;

int t; 

int main(){
	cin>>t;
	while(t--){
		bool b=false;
		int n,k;
		long long a[1000];
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			if(a[i]>a[i+1])
				b=true;
		}
		if(k>=2)
			cout<<"YES"<<endl;
		else
			if(b)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		
	}	
	
	
}
