///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
const int mod = 1000000007;

int factorial(int n){
	if(n == 0 || n == 1) return 1;

	return (1LL * n * factorial(n - 1) % mod) % mod;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		cout << factorial(n) << endl;;
	} 


	return 0;	
}	