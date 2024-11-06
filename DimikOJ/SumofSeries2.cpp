///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int fact(int n){
	ll fat = 1;
	for(ll i = 1; i <= n; i++){
		fat *= i;
	}
	return fat;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		double sum = 0;
		for(double i = 1; i <= n; i++){
			ll fat = fact(i);
			double div = i / fat;
			sum += div;
		}
		cout << fixed << setprecision(4) << sum << endl;

		
	} 
	
	return 0;	
}