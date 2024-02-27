#include<bits/stdc++.h>
using namespace std;

string L,R; 
int t; 

int main(){
	cin>>t;
	while(t--){
		int s=0;
		cin>>L>>R;
		if (L.length()<R.length()){
			long int i=0;
			s+=int(R[0])-48;
			s+=9*(R.length()-1);
			}
		else if(R.length()<L.length()){
			long int i=0;
			s+=int(L[0])-48;
			s+=9*(L.length()-1);
		}
		else{
		long int i=0;
		while(L[i]==R[i] && i<L.length()){
			i++;
		}
		//s+=abs(int(L[i])-int(R[i]));while(i<L.length()){s+=9;}	
		if(i==L.length()){
			s=0;
		}
		else{
		s+=abs(int(L[i])-int(R[i]));	
		i++;
		if(i<L.length())
			s+=9*(L.length()-i);	
		}
		}
		cout<<s<<endl;		
	}			
}
		
		
		
		
		
		

	
	
	
	
	

