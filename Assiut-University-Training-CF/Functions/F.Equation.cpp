///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

void power(int n, int k){
	ll ans = 0;
	for(int i = 2; i <= k; i += 2){
		ll mul = 1;
		for(int j = 1; j <= i; j++){
			mul *=  n;
		}
			ans += mul;
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;
	
	power(n, k);
	
	return 0;	
}