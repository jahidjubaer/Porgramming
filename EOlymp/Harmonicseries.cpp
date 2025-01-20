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
	double sum = 0;
	for(int i = 1; i <= n; i++){
		sum += (1.00 / i);
	} 
	cout << fixed << setprecision(4) << sum << endl;
	
	return 0;	
}