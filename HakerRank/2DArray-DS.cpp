///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int ch[7][7];

	for(int i = 1; i <= 6; i++){
		for(int j = 1; j <= 6; j++){
			cin >> ch[i][j];
		}
	} 

	int max_sum = - 100;
	for(int dot_i = 1; dot_i <= 6; dot_i++){
		for(int dot_j = 1; dot_j <= 6; dot_j++){
			if((dot_i - 1 >= 1 ) and (dot_i - 1 >= 1 and dot_j - 1 >= 1 ) and (dot_i + 1 <= 6 and dot_j - 1 >= 1  ) 
				and (dot_i + 1 <= 6 ) and (dot_i + 1 <= 6 and dot_j + 1 <= 6 ) and (dot_i - 1 >= 1 and dot_j + 1 <= 6 ))
			{
				int sum = ch[dot_i - 1][dot_j] + ch[dot_i - 1][dot_j - 1] + ch[dot_i + 1][dot_j - 1] + ch[dot_i + 1][dot_j] + ch[dot_i + 1][dot_j + 1] + ch[dot_i - 1][dot_j + 1] + ch[dot_i][dot_j];
				max_sum = max(max_sum, sum);
			}		
		}

	}

	cout << max_sum << endl;


	
	


	
	return 0;	
}