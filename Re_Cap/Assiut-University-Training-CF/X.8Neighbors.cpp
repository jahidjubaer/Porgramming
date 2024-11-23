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

	char ch[n + 1][m + 1];

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> ch[i][j];
		}
	} 

	int dot_i, dot_j;
	cin >> dot_i >> dot_j;



	bool is_neighbor = true;
	if((dot_i - 1 >= 1 and ch[dot_i - 1][dot_j] != 'x') or (dot_i - 1 >= 1 and dot_j - 1 >= 1  and ch[dot_i - 1][dot_j - 1] != 'x') or (dot_j - 1 >= 1 and ch[dot_i][dot_j -1] != 'x')
		or (dot_i + 1 <= n and dot_j - 1 >= 1  and ch[dot_i + 1][dot_j - 1] != 'x') or (dot_i + 1 <= n and ch[dot_i + 1][dot_j] != 'x') or (dot_i + 1 <= n and dot_j + 1 <= m and ch[dot_i + 1][dot_j + 1] != 'x')
		or (dot_j + 1 <= m and ch[dot_i ][dot_j + 1] != 'x') or (dot_i - 1 >= 1 and dot_j + 1 <= m and ch[dot_i - 1][dot_j + 1] != 'x')){
		is_neighbor = false;
	}

	if(is_neighbor) cout << "yes" << endl;
	else cout << "no" << endl;


	return 0;	
}