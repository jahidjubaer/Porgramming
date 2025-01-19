///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		ll sum_square =  ((ll) n * (n + 1) * (2 * n + 1)) / 6;

		ll sum_natural = (ll) n * (n + 1) / 2;
		ll sum_square_natural = (ll) sum_natural * sum_natural;

		ll diff = sum_square_natural - sum_square ;
		cout << diff << endl;

		
	}
	
	return 0;	
}