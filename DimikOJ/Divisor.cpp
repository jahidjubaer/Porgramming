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
		int n;
		cin >> n;
		cout << "Case " << cas << ":";
		cas++;
		for(int i = 1; i <= n; i++){
			if(n % i == 0){
				cout << ' ' << i ;
			}
		}
		cout << endl;
	} 
	
	return 0;	
}