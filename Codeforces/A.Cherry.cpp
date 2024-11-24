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

		int a[n+ 1];
		
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}

		int max_element = 0;
		int min_element = 1e7 + 1;

		for(int i =1; i <= n;  i++){
			max_element = max(max_element, a[i]);
			min_element = min(min_element, a[i]);
		}

		ll product = (ll) max_element * min_element;

		for(int i = 1; i < n; i++){
			ll pair_product = (ll) a[i] * a[i + 1];
			product = max(product, pair_product);
		} 

		cout << product << endl;

		
	}
	
	return 0;	
}