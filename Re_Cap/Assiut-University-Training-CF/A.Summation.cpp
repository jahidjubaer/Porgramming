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
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	} 

	ll sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i];
	}
	cout << abs(sum) << endl;
	
	return 0;	
}