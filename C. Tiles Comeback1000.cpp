#include<bits/stdc++.h>
using namespace std;

int t,n,k,c[200001],c0,cn,j;


int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++)
			cin>>c[i];
		c0=0;
		cn=0;
		for(int i=0;i<n;i++){
			if(c[i]==c[0]){
				c0++;
				j=i;
				if(c0>=k)
					break;	
			}
		}
		for(int i=j+1;i<n;i++){
			if(c[i]==c[n-1])
				cn++;
		}
		if(c[0]==c[n-1])
			cn=c0;

		if((c0>=k)&&(cn>=k))
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
	
	
	
	
	
}
