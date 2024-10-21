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

	for(int i = 1; i <= n * 4; i++){
		if(i % 4 == 0) {
			cout << "PUM" << endl;
			continue;
		}
		cout << i << " ";
	} 
	
	return 0;	
}