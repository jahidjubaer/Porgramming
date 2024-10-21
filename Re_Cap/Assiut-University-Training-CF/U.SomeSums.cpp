///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a, b;
	cin >> n >> a >> b;
	if(a < b) swap(a, b);

	int i;
	ll sum = 0;
	for(i = 1; i <= n; i++){
		int number = i;
		int sum_digit = 0;
		while(number > 0){
			int last_digit = number % 10;
			sum_digit += last_digit;
			number /= 10;
		}

		if(sum_digit <= a && sum_digit >= b){
			sum += i;
		}
	}

	cout << sum << endl;
	
	
	return 0;	
}

