#include <bits/stdc++.h>
using namespace std ; 


int main(){
	int t ; 
	cin>>t;
	while(t--){
		int n , a[100], res, temp; 
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		res=a[0];
		for(int i=1;i<n;i++){
			if(a[i]<res){
				a[i]=(res/a[i]+1)*a[i];
			if(a[i]%res==0){
				res+=a[i];
			}
			else{
				res+=a[i]%res;
			}			
			}
			else if(a[i]>res){
				res+=a[i]-res;
			} 
			else{
				res+=a[i];
			}

		}
		cout<<res<<endl;
	}	
	return 0 ; 
}
