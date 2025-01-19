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

	 	int swap_bits = (1 << 31) ^ n;
	 	cout << swap_bits << endl;
	 }
	
	return 0;	
}