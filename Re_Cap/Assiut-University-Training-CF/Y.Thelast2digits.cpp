///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll a, b, c, d;
	cin >> a >> b >> c >> d;

	ll ans = ((a % 100) * (b % 100) % 100 * ((c % 100) * (d % 100)) % 100 ) % 100;
	if(ans <= 9){
		cout << '0' << ans << endl;
	}
	else {
		cout << ans << endl;
	}
}