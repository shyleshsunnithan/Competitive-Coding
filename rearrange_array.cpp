#include <bits/stdc++.h> 
using namespace std; 

void rearrange(long long arr[], long long n) 
{ 

    long long temp[n],i, small=0, large=n-1, flag = true; 
  
    for (i=0; i<n; i++) 
    { 
        if (flag) 
            temp[i] = arr[large--]; 
        else
            temp[i] = arr[small++]; 
  
        flag = !flag; 
    } 
  
 
    for (i=0; i<n; i++) 
        arr[i] = temp[i]; 
} 
 
int main() 
{ 
    long long n,i,test;
    cin>>test;
    
    while(test--){
        
        cin>>n;
        long long arr[n];
    
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
  
        rearrange(arr, n); 
  
        for (i=0; i<n; i++) 
            cout << arr[i] << " "; 
    
        cout<<"\n";
    }
    
    return 0; 
} 
