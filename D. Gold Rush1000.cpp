#include<bits/stdc++.h>
using namespace std;
int t ; 

bool trouve(int n,int m){
	if(n%3!=0 || n<=m)
		return false;
	else if(n/3==m || (2*n)/3==m)
		return true;
	else
		return (trouve((2*n/3),m) || trouve(n/3,m));
	}



int main(){
	 cin>>t;
	 while(t--){
	 	 bool b,c=false;
		 int n,m;
	 	cin>>n>>m;
	 	if(n==m)
		 	c=true;	
		b=trouve(n,m);
	 	if(b || c)
	 		cout<<"YES"<<endl;
	 	else
	 		cout<<"NO"<<endl;
	 }   
}
