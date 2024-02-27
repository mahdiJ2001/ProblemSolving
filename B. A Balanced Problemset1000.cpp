#include<bits/stdc++.h>
using namespace std;


int t ; 

int main(){
	cin>>t;
	while(t--){
		int x,n ; 
		cin>>x>>n ; 
		int ans=1;
		if(x%n==0)
			ans=x/n;
		else{	
		for(int i=1;i<=(x/n);i++){
			if(x%i==0){
				ans=max(ans,i);
			}
		}
		}
		cout<<ans<<endl; 
	}
	return 0 ; 
}
