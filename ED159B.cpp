#include<bits/stdc++.h>
using namespace std;

int tc; 

int main(){
	cin>>tc;
	while(tc--){
		int nt;
		long n,l,t,ans,s,s1; 
		long long wd,n1,p,p1 ; 
		cin>>n>>p>>l>>t;
		nt=(n/7)+1;
		if(n % 7 ==0)
			nt=nt-1;
		wd=min(2,nt)*t+l;
		n1=(nt/min(2,nt))*wd;
		if(n1>=p){
			s=p/wd+1;
			ans=n-s;
		}
		else{
			p1=p-n1;
			if(nt%2!=0)
				p1=p1-l-t;
			s1=p1/l;
			s=s1+nt/min(2,nt);
			if(nt%2!=0)
				n--;
			ans=n-s;
			
		}
		cout<<ans<<endl;
	}
}
