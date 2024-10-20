///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	 int a, b;
	 cin >> a >> b;
	 int n = min(a, b);

	 int gcd = 0;
	 for(int i = 1; i <= n; i++){
	 	if(a % i == 0 && b % i == 0) gcd = i;
	 }
	 cout << gcd << endl;
	
	return 0;	
}