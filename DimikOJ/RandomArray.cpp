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
		int a[n];

		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		bool is_sorted = true;
		for(int i = 0; i < n - 1; i++){
			if(a[i] > a[i+1]){
				is_sorted = false;
				break;
			}
		}

		bool is_sorted_dis = true;
		for(int i = 0; i < n - 1 ; i++){
			if(a[i] < a[i+1]){
				is_sorted_dis = false;
				break;
			}
		}
		if(is_sorted or is_sorted_dis){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	} 
	
	return 0;	
}