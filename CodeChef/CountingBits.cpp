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
		int range;
		cin >> range;

		int cnt = 0;
		for(int i = 1; i <= range; i++){
			int n = i;
			while(n > 0){
			int last_digit = n % 2;
			if(last_digit == 1) cnt++;
			n = n / 2;
			}
		}
		
		cout << cnt << endl;
	}

	 
	
	return 0;	
}