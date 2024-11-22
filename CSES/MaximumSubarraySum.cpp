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

	ll sub_array_sum = -1e18 + 1;
	ll end_sum = -1e18 + 1;
	for(int i = 0; i < n; i ++){
		end_sum = max((ll) a[i], a[i] + end_sum);
		sub_array_sum = max(sub_array_sum, end_sum);
	}

	cout << sub_array_sum << endl;
	
	return 0;	
}