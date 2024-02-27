#include <bits/stdc++.h>
using namespace  std ; 

int main(){
	int t ; 
	cin>>t;
	while(t--){
	int a , b , res=0; 
	cin>>a>>b;
	int xk,yk;
	cin>>xk>>yk;
	int xq,yq;
	cin>>xq>>yq;
	if(a==b && a==1 && abs(yk-yq)==2*a && abs(xk-xq)==2*a)
		res++;
	else{
	if(abs(yk-yq)==b+a && abs(xk-xq)==b+a && a!=b)
		res+=2;
	if(a!=b){
	if(abs(yk-yq)==2*a && abs(xk-xq)==2*b)
		res+=2;		
	if(abs(yk-yq)==2*b && xk==xq)
		res+=2;
	if(yk==yq && abs(xk-xq)==2*a)
		res+=2;
	if(yk==yq && abs(xk-xq)==2*b)
		res+=2;
	if(abs(yk-yq)==2*a && xk==xq)
		res+=2;	
	}
	if(a==b && xk==xq && abs(yk-yq)==2*a )
		res+=2;
	if(a==b && yk==yq && abs(xk-xq)==2*a )
		res+=2;
	if(a==b && abs(yk-yq)==2*a && abs(xk-xq)==2*b)
		res+=2;
	else{
	if(abs(yk-yq)==2*a && abs(xk-xq)==2*b)
		res+=2;
	if(abs(yk-yq)==2*b && abs(xk-xq)==2*a )
		res+=2;	
	if(abs(yk-yq)==2*a && abs(xk-xq)==2*a )
		res+=2;
	if(abs(yk-yq)==2*b && abs(xk-xq)==2*b)
		res+=2;		
	}
	}
	cout<<res<<endl;
	}
}
