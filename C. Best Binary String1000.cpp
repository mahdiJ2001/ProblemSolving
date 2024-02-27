#include<bits/stdc++.h>
using namespace std;

int t;
string s; 
int main(){
cin>>t; 
while(t--){
	cin>>s;
	int i=0;
	string s1="";
	for(i=0;i<s.length();i++){
		if(s[i]=='?'){
			if(i==0)
				s1+='0';
			else if(i==s.length()-1)
				s1+=s1[i-1];
			else if(s1[i-1]=='0' && s[i+1]=='0')
				s1+='0';
			else if(s1[i-1]=='1' && s[i+1]=='1')
				s1+='1';
			else if(s1[i-1]=='1' || s1[i-1]=='0')
				s1+=s1[i-1];
			else if(s[i+1]=='1' || s[i+1]=='0')
				s1+=s[i+1];
		}
		else
			s1+=s[i];
	}
	cout<<s1<<endl;
	}
}

