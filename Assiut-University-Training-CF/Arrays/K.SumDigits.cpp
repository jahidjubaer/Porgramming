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
	char ch[n];

	for(int i = 0; i < n; i++){
		cin >> ch[i];
	} 

	ll sum = 0;
	for(int i = 0; i < n; i++){
		sum += ch[i] - '0';
	}
	cout << sum << endl;
	
	return 0;	
}