#include <bits/stdc++.h>
using namespace std ; 

int main(){
	int t ; 
	cin>>t;
	while(t--){
		int n,i=0 ,c=0; 
		cin>>n;
		string s ; 
		cin>>s;
		while(i<s.length()){
			if(s[i+1]=='@' || s[i+1]=='.'){
				if(s[i+1]=='@') c++;
				i++;
			}
			else if(s[i+1]=='*' && (s[i+2]=='.' ||s[i+2]=='@')){
				if(s[i+2]=='@') c++;
				i+=2;
			}
			else break;	
		}
	cout<<c<<endl;
	}
	return 0 ; 
}
