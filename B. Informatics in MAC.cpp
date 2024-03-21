#include <bits/stdc++.h>
using namespace std ;
/*
int mex(int l,int r,int a[]){
	int mex=0  , n=r-l+1 ;
	
	map<int,int> mp;
	for(int i=l;i<=r;i++){
		mp[a[i]]++;
	}
	for(int i=0;i<=n;i++){
		if(mp[i]==0){
			mex=i;
			break;
		}
	}
	return mex;
}*/


int main(){
	int t ; 
	cin>>t;
	while(t--){
		int n ; 
		vector<pair<int,int>> v;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		/*for(int i=0;i<n-1;i++){
			if(mex(0,i,a)==mex(i+1,n-1,a)){
				v.push_back({1,i+1});
				v.push_back({i+2,n});
				break;				
			}
		}*/
		//
		set<int> preMex,sufMex;
		int m=0;
		vector<int> prefix(n),suffix(n);
		for(int i=0;i<n;i++){
			preMex.insert(a[i]);
			while(preMex.count(m)) m++;
			prefix[i]=m;
		}
		m=0;
		for(int i=n-1;i>=0;i--){
			sufMex.insert(a[i]);
			while(sufMex.count(m)) m++;
			suffix[i]=m;
		}				
		for(int i=0;i<n-1;i++){
			if(prefix[i]==suffix[i+1]){
				v.push_back({1,i+1});
				v.push_back({i+2,n});
				break;
			}
		}
		//
		if(v.empty())
			cout<<-1<<endl;
		else{
			cout<<2<<endl;
			for(const auto& pair:v){
				cout<<pair.first<<" "<<pair.second<<endl;
			}
		}
	}
	return 0 ; 
}
