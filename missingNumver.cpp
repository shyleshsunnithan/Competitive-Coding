#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test, x;
	cin>>test;
	while(test--)
	{
		int size,sum=0;
		cin >> size;

		for(int i=1;i<size;i++){
			cin >> x;
			sum = sum^x;
			sum = sum^i;
		}
		cout<<(sum^size)<<endl;
	}
	return 0;
}
