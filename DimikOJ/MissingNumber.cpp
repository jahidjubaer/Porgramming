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
		ll sum_of = (ll) n * (n + 1) / 2;

		int len = n -1;
		int a[len];
		for(int i = 0; i < len; i++){
			cin >> a[i];
		}
		ll sum = 0;
		for(int i = 0; i < len; i++){
			sum += a[i];
		}

		cout << sum_of - sum << endl;

		
	} 
	
	return 0;	
}