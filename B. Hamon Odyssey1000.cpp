#include<bits/stdc++.h>
using namespace std;

int t,i,c,n,j,f; 
long a[200000];



int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		f=a[0];
		c=1;
		for(int i=0;i<n;i++){
			f&=a[i];
			if(f==0){
				if(i==n-1)break;
				c++;
				f=a[i+1];
			}
		}
		if(f!=0)
			c--;
		c=max(c,1);
		cout<<c<<endl;
		}	
}
