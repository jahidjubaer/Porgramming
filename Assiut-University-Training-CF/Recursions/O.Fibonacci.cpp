///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int fibonacci(int n){
	if(n == 1) return 0;
	if(n == 2) return 1;

	return fibonacci(n - 1) + fibonacci (n - 2);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	 int n;
	 cin >> n;
	 cout << fibonacci(n);
	
	return 0;	
}