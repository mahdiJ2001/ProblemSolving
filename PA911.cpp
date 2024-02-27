#include<bits/stdc++.h>
using namespace std;

int t ; 

int main(){
	cin>>t;
	while(t--){
		string s; 
		int n,r=0;
		cin>>n; 
		cin>>s;
		for(int i=0;i<n;i++){
			if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.' ){
				r=2;
				break;
			}
			else{
				if(s[i]=='.')
					r+=1;
			}
		}
		cout<<r<<endl;
	}
}
