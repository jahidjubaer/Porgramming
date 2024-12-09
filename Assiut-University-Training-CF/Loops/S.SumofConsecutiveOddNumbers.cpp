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
		int a, b;
		cin >> a >> b;
		if(a > b) swap(a,b);

		int sum = 0;
		a = a + 1;
		for(int i = a; i < b; i++){
			if(i % 2 == 1){
				sum += i;
			}
		}
		cout << sum << endl;
	} 
	
	return 0;	
}

