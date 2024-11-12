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
    int a[n+1][n+1];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

   int first_dia = 0;
   for(int i = 1; i <= n; i ++){
    first_dia += a[i][i];
   }

   int sec_dia = 0;
   for(int i = 1; i <= n; i++){
    sec_dia += a[i][n + 1 - i];
   }

   int abs_value  = abs(first_dia - sec_dia);

   cout << abs_value << endl; 
	
	return 0;	
}