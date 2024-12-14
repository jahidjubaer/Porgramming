///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

void digit(int number){
	if(number <= 0) return;
	int last_digit = number % 10;
	number /= 10;
	digit(number);
	cout << last_digit << ' ';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	 int n;
	 cin >> n;
	 while(n--){
	 	int number;
	 	cin >> number;
	 	if(number == 0) cout << 0 << endl;
	 	else{
	 		digit(number);
	 		cout << endl;
	 	} 
	 	
	 }
	
	return 0;	
}