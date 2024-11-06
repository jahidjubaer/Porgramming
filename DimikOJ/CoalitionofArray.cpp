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
		int n, m;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cin >> m;
		int b[m];
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}

		int len = m + n;
		int mix[len];
		for(int i = 0; i < n; i++){
			mix[i] = a[i];
		}
		int index = 0;
		for(int i = n; i < len; i++){
			mix[i] = b[index];
			index++;
		}

		sort(mix, mix + len);
		for(int i = 0; i < len ;i++){
			cout << mix[i] << ' ';
		}
		cout << endl;

	} 
	
	return 0;	
}	