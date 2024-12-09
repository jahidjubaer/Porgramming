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

	if(b * log(a) > d * log(c)){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	
	return 0;	
}