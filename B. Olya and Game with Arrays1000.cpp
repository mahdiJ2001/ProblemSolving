#include<bits/stdc++.h>
using namespace std;

int t,n,m;
long long a0[25001],a1[25001],a[25001],beauty;


int main(){
	
	cin>>t;
	
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>m;
			for(int j=0;j<m;j++)
				cin>>a[j];
			sort(a,a+m);
			a0[i]=a[0];
			a1[i]=a[1];	
		}
	sort(a0,a0+n);
	sort(a1,a1+n,greater<int>());
	beauty=a0[0];
	for(int i=0;i<n-1;i++){
		beauty+=a1[i];
	}	
	cout<<beauty<<endl;
	}
}
