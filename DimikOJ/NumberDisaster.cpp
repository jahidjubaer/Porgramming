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

	while(t--){
		int n;
		cin >> n;
		int temp = n;
		int number = 0;
		int cnt = 0;
		while(n > 0){
			int last_digit = n % 10;
			n /= 10;
			cnt++;
		}
		int i = cnt - 1;
		while(temp > 0){
			int last_digit = temp % 10;
			number += round(pow(10, i)) * last_digit;
			temp /= 10;
			i--;
		}
		cout << number << endl;
	} 
	
	return 0;	
}