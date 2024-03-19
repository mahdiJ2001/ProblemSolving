#include <bits/stdc++.h>
using namespace std ; 

int main(){
	int t ; 
	cin>>t;
	while(t--){
		int n , a[50]; 
		bool res=true;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		vector<int> v({a[n-1]});
		for(int i=n-2;i>=0;--i){
			if(a[i]>v.back()){
				v.push_back(a[i]%10);
				v.push_back(a[i]/10);
			}
			else
				v.push_back(a[i]);
		}
		cout << (is_sorted(v.rbegin(), v.rend()) ? "YES" : "NO") << '\n';
	}
	return 0 ; 
}
