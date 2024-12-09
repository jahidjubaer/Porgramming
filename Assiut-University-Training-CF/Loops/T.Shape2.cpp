///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for(int row = 1; row <= n; row++){
		for(int col = n - row ; col >= 1; col--){
			cout << " ";
		}
		
		for(int cl2 = 1 ; cl2 <= 2 * row - 1; cl2++){
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;	
}