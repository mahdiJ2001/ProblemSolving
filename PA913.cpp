#include<bits/stdc++.h>
using namespace std;

int t ; 

int main(){
	cin>>t;
	while(t--){
		string s,s1,s2 ;
		cin>>s;
		for(int i=0;i<=7;i++){
			if(char(49+i)!=s[1])
				cout<<s[0]<<char(49+i)<<endl;
		}
		for(int i=0;i<8;i++){
			if(char(97+i)!=s[0])
				cout<<char(97+i)<<s[1]<<endl;
		}	
	}
}
