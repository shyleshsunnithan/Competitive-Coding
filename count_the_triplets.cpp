#include <bits/stdc++.h>
using namespace std;

long int find_Triplet(int a[], int n)
{
	sort(a, a + n); 
  long int t=0;
	for (int i = n - 1; i >= 0; i--) {
		int j = 0;
		int k = i - 1;
		while (j < k)
		{
			if (a[i] == a[j] + a[k]){
        t++;
        j++;
        k--;
     }
		else if (a[i] > a[j] + a[k])
			j++;
		else
			k--;
		}
	}
return t;
}

int main()
{
	int t;
	cin>>t;
  
	while(t--)
	{
	 int n;
	 cin>>n;
   int a[n],i;
	 for(i=0;i<n;i++)
	 cin>>a[i];
	 long int ans=find_Triplet(a, n); 
	 if(ans)
	 cout<<ans<<endl;
	 else
	 cout<<"-1"<<endl;
	}
  
	return 0;
  
}
