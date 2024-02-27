#include<bits/stdc++.h>
using namespace std;

int t,q,i,j ; 
long x,pr,mn,mx ; 
bool b;

int main(){
	cin>>t;
	while(t--){
		cin>>q;
		if(q==1)
			cout<<1;
		else{
			cin>>x;
			cout<<1;
		pr=x;
		mn=x;
		mx=1e9;
		b=true;
		for(i=1;i<q;i++){
		cin>>x;
		if(x>=mn&&x<=mx){ cout<<1;mn=x;}
		else if(b && x<=pr ){ cout<<1;b=false;mn=x;mx=pr;}
		else {cout<<0;}		
		}
	}
		cout<<endl;		
		} 
	}

