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
		ll a , b;
		cin >> a >> b;
		ll lcm = (a * b) / (__gcd(a, b));

		cout << "LCM = " << lcm << endl;
	} 
	
	return 0;	
}