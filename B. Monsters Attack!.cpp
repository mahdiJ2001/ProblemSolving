#include<bits/stdc++.h>
using namespace std ;
 
int main(){	
	int t ; 
	cin>>t;
	while(t--){
		int n ; 
		long long k,s=0;
		bool b=true; 
		cin>>n>>k;
		vector<int> x(n);
		vector<long long> sum(n+1) , a(n) ;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++){
			cin>>x[i];
			//h[x[i]]={a[i],h[x[i]].second+1};
		}
		for(int i=0;i<n;i++) sum[abs(x[i])]+=a[i];
		for(int i=1;i<=n;i++){
			s+=k;
			s-=sum[i]; 
			if(s<0){
				b=false;
				break;
			}			
		}
		if(b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0 ; 
}
