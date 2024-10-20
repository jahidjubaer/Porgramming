///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;

	for(int row = 1; row <= n; row++){
		for(int col = 1; col <= n + 1 - row; col++){
			cout << '*';
		}
		cout << endl;
	} 
	
	return 0;	
}