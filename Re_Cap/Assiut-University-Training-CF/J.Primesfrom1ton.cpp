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

	for(int number = 2; number <= t; number++){
		bool is_prime = true;
		for(int i = 2; i < number; i++){
			if(number % i == 0){
				is_prime = false;
				break;
			}
		}
		if(is_prime){
			cout << number << " ";
		}
	}


	
	return 0;	
}