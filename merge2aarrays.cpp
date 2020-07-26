#include <bits/stdc++.h> 
using namespace std; 
  
void merge(long long ar1[], long long ar2[], long long m, int n) 
{ 

    for (long long i=n-1; i>=0; i--) 
    { 

        long long j, last = ar1[m-1]; 
        for (j=m-2; j >= 0 && ar1[j] > ar2[i]; j--) 
            ar1[j+1] = ar1[j]; 
  

        if (j != m-2 || last > ar2[i]) 
        { 
            ar1[j+1] = ar2[i]; 
            ar2[i] = last; 
        } 
    } 
} 

int main(void) 
{ 
    long long test,m,n,ar1[100001],ar2[100001],i;
    
    
    cin>>test;
    while(test--){
        
        cin>>m>>n;
        
        for (i=0; i<m; i++) 
            cin>>ar1[i];
            
        for (i=0; i<n; i++) 
            cin>>ar2[i];
        
        merge(ar1, ar2, m, n); 
        
        for (i=0; i<m; i++) 
            cout << ar1[i] << " "; 
        cout << "\n";
        for (i=0; i<n; i++) 
            cout << ar2[i] << " "; 
            
        cout<<"\n";
        
    }
    
   return 0; 
} 
