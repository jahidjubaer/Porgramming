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

		for(int i = n; i >= 0; i--){
			if(i != 0) cout << 2;
			if(i == 0) cout << 1 ;
			if(i > 1) cout <<  '^' << i;
			if(i != 0) cout <<  " + ";
		}
		cout << endl;
	} 
	
	return 0;	
}