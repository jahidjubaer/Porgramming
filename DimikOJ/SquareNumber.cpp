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

		double square = sqrt(n);
	

		if(square / (int) square == 1 || square == 0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	
	return 0;	
}