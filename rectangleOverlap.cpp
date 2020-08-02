#include <bits/stdc++.h>
using namespace std;

bool doOverlapX(int l1x, int r1x, int l2x, int r2x) 
{ 
    if (l1x > r2x || l2x > r1x) 
        return false; 
   
    return true; 
} 

bool doOverlapY(int l1y, int r1y, int l2y, int r2y) 
{ 
 
    if (l1y < r2y || l2y < r1y) 
        return false; 
  
    return true; 
} 


int main() {
	int flag=0,test,X,Y,l1x,l1y,r1x,r1y,l2x,l2y,r2x,r2y;
	
	cin>>test;
	while(test--){
	    cin>>l1x>>l1y>>r1x>>r1y;
	    cin>>l2x>>l2y>>r2x>>r2y;
	    
	    X=doOverlapX(l1x,r1x,l2x,r2x);
	    Y=doOverlapY(l1y,r1y,l2y,r2y);
	    
	    if(X==0||Y==0){
	        flag = 0;
	    }
	    
	    else{
	        flag = 1;
	    }
	    
	    cout<<flag<<endl;
	}
	return 0;
}
