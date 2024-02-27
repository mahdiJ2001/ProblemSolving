#include<bits/stdc++.h>
using namespace std;

int t ;


int main(){
	cin>>t;
	while(t--){
		string s,s1="";
		cin>>s;
		int low=0,upp=0;
		stack<pair<int,char> > l,u;
		for(int i=0;i<s.length();i++){
			if(islower(s[i]) && s[i]!='b'){
				l.push({i,s[i]});
				low++;				
			}
			if(isupper(s[i]) && s[i]!='B'){
				u.push({i,s[i]});
				upp++;				
			}
			if(s[i]=='b' && !l.empty()){
				l.pop();
				low--;
			}

			if(s[i]=='B' && !u.empty() ){
				u.pop();
				upp--;
			}
		}
		for(int i=0;i<low+upp;i++){
			if(!l.empty() && (u.empty() || l.top().first > u.top().first) ){ 
				s1+=l.top().second;
				l.pop();	
			}
			else{
				if(!u.empty()){
				s1+=u.top().second;
				u.pop();					
				}
			}
		}
		reverse(s1.begin(),s1.end());
		cout<<s1<<endl;
	}
}
