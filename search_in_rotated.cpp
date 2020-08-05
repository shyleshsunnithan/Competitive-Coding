#include <iostream>
using namespace std;

int main() {

    int number,size,i,test,k,ind;
    
    cin>>test;
    
    
    
    while(test--){
        cin>>size;
        int a[size];
        for(i=0;i<size;i++){
            cin>>a[i];
        }
        
        cin>>k;
        
        for(i=0;i<size;i++){
            if(k==a[i]){
                ind=i;
                break;
            }
            else{
                ind=-1;
            }
        }
        
        cout<<ind<<"\n";
    }
    
	return 0;
}
