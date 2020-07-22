#include <bits/stdc++.h>
using namespace std;

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long k;
        cin>>n>>k;
        int a[n];
        
        int last=0;
        int start=0;
        unsigned long long  c_sum=0;
        bool f=false;
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        for(int i=0;i<n;i++)
        {
            currsum += a[i];
            if(c_sum>=k)
            {
                last=i;
                while(k<c_sum && start<last)
                {
                    c_sum -= a[start];
                    ++start;
                }
                
                
                if(c_sum==k)
                {
                    cout<<start+1<<" "<<last+1<<endl;
                    f = true;
                    break;
                }
                
            }
        }
        if(f==false)
        cout<<-1<<endl;
        
    }
	return 0;
}
