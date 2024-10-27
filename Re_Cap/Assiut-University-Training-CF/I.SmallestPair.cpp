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
		int n;
		cin >> n;
		int a[n + 1];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		int sum = 0;
		int minimum_sum = 1e7;
		for(int i = 1; i < n; i++){
			for(int j = i + 1; j <= n; j++){
				sum = a[i] + a[j] + j - i;
				if(sum < minimum_sum){
					minimum_sum = sum;
				}
				
			}
		}
		cout << minimum_sum << endl;
	} 
	
	return 0;	
}