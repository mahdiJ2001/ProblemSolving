#include<bits/stdc++.h>
using namespace std;

int t ; 

int main(){
	cin>>t;
	while(t--){
    	long int n,m,sum=0,b,max1=-999999,max2=0,min1=999999,min2=0;
		cin>>n>>m;
		for(long int i=1;i<=(n*m);i++){
			cin>>b;
			if(b>=max1){
				max2=max1;
				max1=b;
			}
			if(b>=max2 && b<max1)
				max2=b;
			if(b<=min1){
				min2=min1;
				min1=b;
			}
			if(b>min1 && b<=min2)
				min2=b;		
		}
		if(abs(max1-max2)<=abs(min1-min2))
			sum=(max2-min1)*(min(n,m)-1)+(max1-min1)*(n*m-min(n,m));
		else
			sum=(max1-min2)*(min(n,m)-1)+(max1-min1)*(n*m-min(n,m));
		cout<<sum<<endl;
	}	
}

