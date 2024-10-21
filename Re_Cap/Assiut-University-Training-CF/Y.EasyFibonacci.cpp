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

	 cout << 0 << ' ';
	
	 int fib = 0;
	 int fib2 = 1;
	 for(int i = 1; i < n; i++){
	 	cout << fib2 << " ";
	 	int temp = fib2;
	 	fib2 = fib2 + fib;
	 	fib = temp;
	 }
	
	return 0;	
}