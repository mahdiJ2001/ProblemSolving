#include<bits/stdc++.h>
using namespace std;

int t ;


int main(){
	cin>>t;
	while(t--){
		int n ,zero=0,one=0;
		string s ;
		bool b=false ;  
		cin>>n;
		cin>>s;
		for(int i=0;i<n;i++){
			if((s[i]=='0' && s[i+1]=='1') || (s[i]=='1' && s[i+1]=='0')){
				b=true;
				break;				
			}

			if(s[i]=='0')
				zero+=1;
			if(s[i]=='1')
				one+=1;
		}
		if(b || (zero>one))
			cout<<"YES"<<endl;
		else	
			cout<<"NO"<<endl;
		}
}
