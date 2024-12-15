///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

// for overflow need function type ll
ll factorial(int n){
	if(n == 1) return 1;

	return (ll) n * factorial(n - 1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	cout << factorial(n) << endl; 
	
	return 0;	
}