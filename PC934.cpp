#include <bits/stdc++.h>
using namespace std ; 	

int main(){
	int t ; 
	cin>>t;
	while(t--){
		long long n ;
		cin>>n;
		map<int,int> a ;
		vector<int> v1,v2;
		int res,c=0 , x;
		
		for(long long i=0;i<n;i++){
			cin>>x;
			a[x]++;
		}
		for(const auto& pair:a){
			if(pair.second==1)
				v1.push_back(pair.first);
		}
		if(v1.size()>=2){
			sort(v1.begin(),v1.end());
		}
		for(const auto& pair:a){
			if(v1.size()<2 || v1.size()>=2 && pair.first!=v1[1])
				v2.push_back(pair.first);
		}
		sort(v2.begin(),v2.end());
		for(auto it=v2.begin();it!=v2.end();++it){
			if(c!=*it){
				res=c;
				break;
			}
			else
				c++;
		}
		res=c;
		cout<<res<<endl;		
	}
	return 0 ; 
}
