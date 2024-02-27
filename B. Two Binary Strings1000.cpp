#include<bits/stdc++.h>
using namespace std;

string a,b ; 
int t,i,j,l ; 
bool boo;

int main() {
	
	cin>>t;
	
	while(t--){
		cin>>a>>b;
		l=a.size();
		boo=false;
		for(i=0;i<l;i++)
			if(a[i]==b[i] && a[i]=='0' && a[i+1]==b[i+1] && a[i+1]=='1')
				boo=true;		
		if(boo)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
}
}
	

