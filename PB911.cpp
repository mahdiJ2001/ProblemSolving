#include<bits/stdc++.h>
using namespace std;

int t ; 

/*
void trouve(int a , int b , int c,string &s){
	if(s[2]!='1'){
	if(a>0 && b>0){
		if(a==b)
			s[2]='1';	
		else
			trouve(a-1,b-1,c+1,s);
	}		
	}
	if(s[1]!='1'){
	if(a>0 && c>0){
		if(a==c)
			s[1]='1';	
		else
			trouve(a-1,b+1,c-1,s);
	}		
	}
	if(s[0]!='1'){
	if(b>0 && c>0){
		if(b==c)
			s[0]='1';
		else
			trouve(a+1,b-1,c-1,s);
	}	
	}
}*/

int main(){
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if(abs(b-c)%2==0)
			cout<<1<<" ";
		else 
			cout<<0<<" ";
		if(abs(a-c)%2==0)
			cout<<1<<" ";
		else
			cout<<0<<" ";
		if(abs(a-b)%2==0)
			cout<<1;
		else
			cout<<0;	
		cout<<endl;
	}
}
