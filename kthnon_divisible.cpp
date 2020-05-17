//Find the Kth number which is not divisible by N
#include <bits/stdc++.h>  
using namespace std; 
int nodivisible(int n, int k) 
{ 
    int find = 0; 
    int j = 0; 
    while (find != k) { 
        j++; 
        if (j % n != 0) 
            find++; 
    } 
    return j; 
} 

int main() 
{ 
    int n = 3; 
    int k = 6; 
    cout << nondeivisible(n, k); 
    return 0; 
} 
