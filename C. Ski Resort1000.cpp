#include<bits/stdc++.h>
using namespace std;

int t,n,i ;
long long k,q,c,a[200001],r; 



int main(){
	cin>>t;
	while(t--){
		cin>>n>>k>>q;
		for(int i=0;i<n;i++)
			cin>>a[i];
		i=0;
		r=0;
		while(i<n){
			if(a[i]<=q){
				c=0;
				while(a[i]<=q && i<n){
					c++;
					i++;
					if(c>=k)
						r+=c-k+1;
				}
			}
			else
				i++;
		}
		cout<<r<<endl;
	}
}
