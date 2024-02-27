#include <bits/stdc++.h>
using namespace std ; 

int main(){
	int t ; 
	cin>>t;
	while(t--){
		int n,res=0; 
		string s;
		map<char,int> occ;
		cin>>n ; 
		cin>>s;
		for(char c : s)
			occ[c]++;
		for(char c : s){
			if(occ[c]>(n/2)){
				res=2*occ[c]-n;
				break;
			}
		}
		if(res==0 && n%2==1)
			res=1;
		cout<<res<<endl;
	}
}
