///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll a, b, c;
	char s, q;
	cin >> a >> s >> b >> q >> c;

	if(s == '+'){
		if(a + b == c){
			cout << "Yes" << endl;
		}
		else{
			cout << a + b << endl;
		}
	}
	else if(s == '-'){
		if(a - b == c){
			cout << "Yes" << endl;
		}
		else {
			cout << a - b << endl; 
		}
	}
	else if(s == '*'){
		if(a * b == c){
			cout << "Yes" << endl;
		}
		else{
			cout << a * b << endl;
		}
	}
	
	return 0;	
}