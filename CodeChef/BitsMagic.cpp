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
		unsigned int n, k;
		cin >> n >> k;
		cout << (n | (1 << k)) << endl;
	}
	
	return 0;	
}