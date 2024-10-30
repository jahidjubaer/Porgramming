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
	int cas = 1;

	while(t--){
		int a, b, c;
		cin >> a >> b >> c;

		int maxi = max(max(a, b), c );
		int mini = min(min(a,b),c);

		int mid = a + b + c - maxi - mini;

		cout << "Case " << cas << ": " << mini << ' ' << mid << ' ' << maxi << endl;
		cas++;
 	} 
	
	return 0;	
}