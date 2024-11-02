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
	ll n;
	cin >> n;

	int pow_of_2 = log2(n) + 1;
	
	ll neg_sum = round(pow(2, pow_of_2)) - 1;
	neg_sum *= 2;
	
	ll sum_of_all_n = n * (n + 1) / 2;

	ll ans = sum_of_all_n - neg_sum;
	cout << ans << endl;

	}
	

	
	return 0;	
}