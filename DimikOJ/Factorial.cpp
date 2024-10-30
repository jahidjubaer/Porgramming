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
		ll factorial = 1;
		for(int i = 1; i <= n; i++){
			factorial = factorial * i;
		}
		cout << factorial << endl;
	} 
	
	return 0;	
}