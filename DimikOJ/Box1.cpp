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

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << '*';
			}
			cout << endl;
		}
		if(t != 0){
			cout << endl;
		}
	} 
	
	return 0;	
}