///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

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

	for(int dot_i = 1; dot_i <= 6; dot_i++){
		for(ind dot_j = 1; dot_j <= 6; dot_j++){
			if((dot_i - 1 >= 1 ) and (dot_i - 1 >= 1 and dot_j - 1 >= 1 ) and (dot_i + 1 <= n and dot_j - 1 >= 1  ) 
				and (dot_i + 1 <= n ) and (dot_i + 1 <= n and dot_j + 1 <= m ) and (dot_i - 1 >= 1 and dot_j + 1 <= m ))
			{
				int sum = ch[dot_i - 1][dot_j] + ch[dot_i - 1][dot_j - 1] + ch[dot_i + 1][dot_j - 1] + ch[dot_i + 1][dot_j] + ch[dot_i + 1][dot_j + 1] + ch[dot_i - 1][dot_j + 1];
				cout << sum << endl;
			}		
		}
	}


	
	


	
	return 0;	
}