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
		int x, power;
		cin >> x >> power;

		int sum = 0;
		for(int i = 0; i <= power; i++){
			sum += round(pow(x, i));
		}
		cout << "Result = " << sum << endl;
	}
	
	return 0;	
}