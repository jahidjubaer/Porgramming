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
		int a[n + 1];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}

		int position = 1;
		int operation = 0;
		for(int i = 1; i <= n; i++){
			
			int pre_p = position;
			if(a[i] > position){
				position += (a[i] - pre_p);
				operation += (a[i] - pre_p);
			}
			position++;
		}
		cout << operation << endl;
	}
	
	return 0;	
}

// other 

// #include<iostream>
// using namespace std;

// // check the editorial of the problem
// int main() {
//   int t; cin >> t;
//   while (t--) {
//     int n; cin >> n;
//     int ans = 0;
//     for (int i = 1; i <= n; i++) {
//       int x; cin >> x;
//       ans = max(ans, x - i);
//     }
//     cout << ans << '\n';
//   }
//   return 0;
// }