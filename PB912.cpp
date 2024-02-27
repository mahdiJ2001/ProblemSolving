#include<bits/stdc++.h>
using namespace std;

int t ;
//indexing from 0 to n-1 might reduce runtime in comparison to 1 to n 
//stock matrix integers in matrix 
int main(){
	cin>>t;
	while(t--){
	int n,i,j,a1;
	bool b=false;
	cin>>n;
	int a[n][n],r[n];
	if(n==1){
		cin>>a1;
		cout<<"YES"<<endl;
		cout<<"7";
	}
	else{
	for(int i=0;i<n;i++)
		r[i]=(1<<30) - 1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			if(i!=j)
				r[i]&=a[i][j];
			}
	}
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j &&(r[i]|r[j])!=a[i][j])
                    b=true;
        }
    }
		if(b)
			cout<<"NO";
		else{
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++)
				cout<<r[i]<<" ";
		}
		}
			cout<<endl;
		}
	}
/*	int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m[n][n];
        int arr[n];
        for(int i = 0;i < n;i++){
            arr[i] = (1<<30) - 1;
        }
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                cin>>m[i][j];
                if(i != j){
                    arr[i] &= m[i][j];
                    arr[j] &= m[i][j];
                }
            }
        }
        bool ok = true;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                if(i != j && (arr[i] | arr[j]) != m[i][j]){
                    ok = false;
                }
            }
        }
        if(!ok){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for(int i = 0;i < n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
    }
}*/

