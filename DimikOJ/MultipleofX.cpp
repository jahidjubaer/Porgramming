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
		int x, n; 
		cin >> x >> n;
		if(x > n) cout << "Invalid!" << endl;
		else{
			for(int i = 1; i <= n; i++){
			if(x * i <= n){
				cout << x * i << endl;
			}
			else if(x * i > n){
				break;
			}
		}
		}

		cout << endl;
		
	} 
	
	return 0;	
}