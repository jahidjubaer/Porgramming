///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	char op;
	cin >> a >> op >> b;

	if(op == '+'){
		cout << a + b << endl;
	} 
	else if(op == '-'){
		cout << a - b << endl;
	}
	else if(op == '*'){
		cout << a * b << endl;
	}
	else{
		cout << a / b << endl;
	}
	
	return 0;	
}