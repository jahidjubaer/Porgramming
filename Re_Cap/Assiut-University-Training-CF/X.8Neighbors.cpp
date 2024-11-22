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
	char a[n + 1][m + 1];

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(i == 1 || j == 1 || j == n || i == n){
				if((i == 1 and j == 1) || (i == n and j == n) || (i == 1 and j == n) || (i == n and j == 1) ){
					cout << a[i][j];
				}
				else{
					
				}
			}
			else{
				cout << ' ';
			}
		}
		cout << endl;
	}

	
	return 0;	
}