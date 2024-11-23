///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	ll array[n];
	ll sub_squ[m];

	for(int i = 0; i < n; i++){
		cin >> array[i];
	} 

	for(int i = 0; i < m; i++){
		cin >> sub_squ[i];
	}

	int temp = 0;
	int cnt = 0;
	for(int i = 0; i < m; i++){
		for(int j = temp; j < n; j++){
			if(array[j] == sub_squ[i]) {
				temp = j + 1;
				cnt++;
				break;

			}

		}
	}
	if(cnt == m) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;	
}