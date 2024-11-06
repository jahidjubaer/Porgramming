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
		int n, m;
		cin >> n >> m;

		for(int row = 1; row <= n; row++){
			for(int col = 1; col <= row; col++){
				cout << m ;
				if(col != row) cout << ' ';
			}
			cout << endl;
		}

		for(int row = 1; row < n; row++){
			for(int col = 1; col <= n - row; col++){
				cout << m;
				if(col != n - row) cout << ' ';
			}
			cout << endl;
		}

		cout << endl;

	} 
	
	return 0;	
}