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
		double n;
		cin >> n;

		int cnt = 0;
		while(n >= 1){
			n /= 2;
			cnt++;
		}

		cout << cnt << " days" << endl;
	} 
	
	return 0;	
}