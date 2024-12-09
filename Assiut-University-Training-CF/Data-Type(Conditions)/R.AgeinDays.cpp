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

	int rem = n % 365;
	cout << n / 365 << " years" << endl; 
	cout << rem / 30 << " months" << endl;
	cout << rem % 30 << " days" << endl;
	
	return 0;	
}