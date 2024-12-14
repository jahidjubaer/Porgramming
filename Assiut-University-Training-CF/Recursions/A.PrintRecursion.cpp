///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int print(int n){
	if(n == 0) return 0;
	cout << "I love Recursion" << endl;
	return print(n - 1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	print(n); 
	
	return 0;	
}