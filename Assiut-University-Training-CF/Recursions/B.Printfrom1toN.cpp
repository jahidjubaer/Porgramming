///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int print(int n, int k){
	if(n < k) return 0;
	cout << k << endl;
	return print(n , k + 1);
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	print(n, 1); 
	
	return 0;	
}