#include<bits/stdc++.h
using namespace std;

int max_subarray(long long x[], long long n) {

	long long i, max_sum = INT_MIN, max_ending = 0;

	for (i = 0; i < n; i++) {
		max_ending += x[i];
    max_sum = max(max_ending,max_sum); //checking max after adding

		if (max_ending < 0) {
			max_ending = 0;
		}

	}
	return max_sum;
}

int main() {
	
	long long i,test, size, a[1000001];
	cin >> test;

	while (test--) {

		cin >> size;
		for (i = 0; i < size; i++) {
			cin >> a[i];
		}

		long long sum = max_subarray(a, size);
		cout<<sum<<endl;
	}
	return 0;
}
