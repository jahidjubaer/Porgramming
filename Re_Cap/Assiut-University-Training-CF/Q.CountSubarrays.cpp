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

	while(t--) {
		int n;
		cin >> n;
		int a[n];

		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		int cnt = 0;
		for(int l = 0; l < n; l++){
			for(int r = l; r < n; r++){
				bool is_okay = true;
				for(int i = l; i <= r; i++){
					if(a[i] > a[i + 1] & i + 1 <= r){
						is_okay = false;
					}
				}
				if(is_okay) cnt++;
			}
		}
		cout << cnt << endl;
	}
	
	return 0;	
}