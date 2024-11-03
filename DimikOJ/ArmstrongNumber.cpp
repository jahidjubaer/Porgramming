///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

bool is_armstrong (int n){

	int number = n;
	int sum_of_power = 0;
	while(n > 0){
		int digit = n % 10;
		int power_of_digit = digit * digit * digit;
		sum_of_power += power_of_digit;
		n /= 10;
	}
	if(number == sum_of_power) return true;
	else return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		if(is_armstrong(n)){
			cout << n << " is an armstrong number!" << endl;
		}
		else{
			cout << n << " is not an armstrong number!" << endl;
		}

	}
	
	return 0;	
}