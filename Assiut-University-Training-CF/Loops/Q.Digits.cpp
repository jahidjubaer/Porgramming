///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while(t--){
		int n; cin >> n;

		if(n == 0){
			cout << 0 << endl;
		}
		else{
			while(n > 0){
			int last_digit = n % 10;
			cout << last_digit << ' ';
			n = n / 10;
		}
		cout << endl;
		}
		

	} 
	
	return 0;	
}