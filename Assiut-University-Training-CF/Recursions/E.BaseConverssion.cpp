///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

void binary(int n){
	if(n <= 0) return;
	int last_digit = n % 2;
	
	n /= 2;
	binary(n);
	cout << last_digit ;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		binary(n);
		cout << endl;
	 }

	
	return 0;	
}