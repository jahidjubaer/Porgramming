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

	int even = 0;
	int odd = 0;
	int neg = 0;
	int pos = 0;
	for(int i = 1; i <= n; i++){
		int x;
		cin >> x;
		if(x > 0){
			pos++;
		}
		else if(x < 0){
			neg++;
		}
		if(x % 2 == 0){
			even++;
		}
		else{
			odd++;
		}
	} 

	cout << "Even: " << even << endl;
	cout << "Odd: " << odd << endl;
	cout << "Positive: " << pos << endl;
	cout << "Negative: " << neg << endl;
	
	return 0;	
}