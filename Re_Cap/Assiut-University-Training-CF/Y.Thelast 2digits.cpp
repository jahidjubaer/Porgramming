///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int ans = (((a % 100) * (b % 100)) % 100 * ((c % 100) * (d % 100)) % 100) % 100;
	cout << ans << endl;
	
	return 0;	
}