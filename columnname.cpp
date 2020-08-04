#include <bits/stdc++.h> 
#define MAX 50 
using namespace std; 

void printString(int n) 
{ 
    char str[MAX]; 
    int i = 0; 
  
    while (n > 0) { 
        
        int r = n % 26; 
        
        if (r == 0) { 
            str[i++] = 'Z'; //if 0 Z should be in the op
            n = (n / 26) - 1; 
        } 
        
        else 
        { 
            str[i++] = (r - 1) + 'A'; 
            n = n / 26; 
        } 
        
    } 
    
    str[i] = '\0'; 
  
    reverse(str, str + strlen(str)); 
    cout << str << endl; 
  
    return; 
} 

int main() 
{ 
    int test,num;
    cin>>test;
    
    while(test--){
        cin>>num;
        printString(num);
        
    } 
  
    return 0; 
}
