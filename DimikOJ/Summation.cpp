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

		int lastdigit = n % 10;
		int firstdigit = n / 10000;
		
		cout << "Sum = " << lastdigit + firstdigit << endl;
	} 
	
	return 0;	
}