///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;

	while(cin >> n >> m){
		if(n <= 0 || m <= 0) break;
		int start = min(n, m);
		int end = max(n, m);

		int sum = 0;
		for(int i = start; i <= end; i++){
			cout << i << ' ';
			sum += i;
		}
		cout << "sum =" <<  sum << endl;
	} 
	
	return 0;	
}