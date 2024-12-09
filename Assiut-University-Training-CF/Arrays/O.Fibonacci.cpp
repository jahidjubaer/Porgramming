// fib(1) = 0.
// fib(2) = 1.
// fib(n) = fib(n - 1) + fib(n - 2).



///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	ll a[n + 1];
	a[1] = 0;
	a[2] = 1;
	for(int i = 3; i <= n; i++){
		a[i] = a[i - 1] + a[i - 2];
	}
	ll fib = a[n];

	cout << fib << endl;
	
	return 0;	
}