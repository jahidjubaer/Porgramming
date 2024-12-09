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
	bool is_prime = true;

	for(int i = 2; i < n; i++){
		if(n % i == 0){
			is_prime = false;
			break;
		}
	} 

	if(is_prime){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	
	return 0;	
}