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
		int a[n];

		for(int i = 0; i < n; i++){	
			cin >> a[i];
		}

		for(int i = 0; i < n; i++){
			if(i % 2 == 0){
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
	
	return 0;	
}