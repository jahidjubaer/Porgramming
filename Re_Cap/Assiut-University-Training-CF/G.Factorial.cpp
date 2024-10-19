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

 	for(int i = 1; i <= n; i++){
 		int x;
 		cin >> x;

 		ll fact = 1;
 		for(int i = 1; i <= x; i++){
 			fact *= i; 
 		}
 		cout << fact << endl;
 	}
	
	return 0;	
}