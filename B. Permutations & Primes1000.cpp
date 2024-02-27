#include<bits/stdc++.h>
using namespace std;
int t,n,j; 

int main(){
	cin>>t;
	while(t--){
	cin>>n ; 
	if(n==1)
		cout<<1;
	else if(n==2)
		cout<<1<<" "<<2;
	else{
		cout<<2<<" ";
		if(n>=4){
			j=4;
			for(int i=2;i<(n+1)/2;i++){
				cout<<j<<" ";
				j++;
			}
		}
		cout<<1<<" ";
		if(n>=4){
		for(int i=((n+1)/2)+1;i<n;i++){
			cout<<j<<" ";
			j++;
		}	
		}
		cout<<3;
	}		
	cout<<endl;		
	}
}
