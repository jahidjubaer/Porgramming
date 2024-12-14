///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

void print (int n){
	if(n == 0) return;
	cout << n ; 
	if(n != 1) cout << ' ';
	return print(n - 1);
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	print(n);
	cout << endl;
	 
	
	return 0;	
}