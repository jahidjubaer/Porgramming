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

	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0){
			cout << i << endl;
			cnt++;
		}
	} 

	if(cnt == 0){
		cout << -1 << endl;
	}
	
	return 0;	
}