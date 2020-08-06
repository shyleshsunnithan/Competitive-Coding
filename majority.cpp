#include <bits/stdc++.h>
using namespace std;

void isMajor(int arr[],int n){
    
unordered_map<int, int> m; 
    for(int i = 0; i < n; i++) 
        m[arr[i]]++; 
    int count = 0; 
    for(auto i : m) 
    { 
        if(i.second > n / 2) 
        { 
            count =1; 
            cout << i.first;
            break; 
        } 
    } 
    
    if(count == 0) 
        cout << -1; 
}

int main(){
	
	int test,i,size;
	
	cin>>test;
	
	while(test--){
	    cin>>size;
	    int a[size];
	    
	    for(i=0;i<size;i++){
	        cin>>a[i];
	    }
	    
	    isMajor(a,size);
	    cout<<"\n";
	}
	
	return 0;
}
