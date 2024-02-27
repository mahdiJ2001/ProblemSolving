/*#include<bits/stdc++.h>
using namespace std;

int t; 

int main(){

cin>>t;

while(t--){
	int n,c1=1,r=1; 
	int a[20000],b[20000],c[20000];
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	int i=2,j=1,k=1;
	c[1]=a[1];
	while(k<=2*n){
		if(a[i]==c[k] && i<=n){
			i++;
			k++;
			c[k]=a[i];
			c1++;
			if(c1>r)
				r=c1;
		}
		else if(b[j]==c[k] && j<=n){
			j++;
			k++;
			c[k]=b[j];
			c1++;
			if(c1>r)
				r=c1;
		}
		else{
			c1=1;
			k++;
			if(i<=n){
			c[k]=a[i];
			i++;				
			}
			else{
			c[k]=b[j];
			j++;
			}
		}					
		}
		cout<<r<<endl;
	}	
}*/	

#include <bits/stdc++.h>
using namespace std;

/*int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        vector<int> b(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; ++i)
        {
            cin >> b[i];
        }
        vector<int> fa(n + n + 1);
        vector<int> fb(n + n + 1);
        int p = 1;
        for (int i = 2; i <= n; ++i)
        {
            if (a[i] != a[i - 1])
            {
                fa[a[i - 1]] = max(fa[a[i - 1]], i - p);
                p = i;
            }
        }
        fa[a[n]] = max(fa[a[n]], n - p + 1);

        p = 1;
        for (int i = 2; i <= n; ++i)
        {
            if (b[i] != b[i - 1])
            {
                fb[b[i - 1]] = max(fb[b[i - 1]], i - p);
                p = i;
            }
        }
        fb[b[n]] = max(fb[b[n]], n - p + 1);

        int ans = 0;
        for (int i = 1; i <= n + n; ++i)
        {
            ans = max(ans, fa[i] + fb[i]);
        }

        cout << ans << '\n';
    }
}*/

int maxarr(int a[20000], int x){
	int c=0; 
	for(int i=0;i<n;i++){
		if(a[i]==x && a[i]=a[i+1])
			c++;
	}
	
	
	
}


int main(){
	
	
	
}
	
	
	
	

