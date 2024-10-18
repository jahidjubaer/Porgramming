///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char ch;
	cin >> ch;

	// if(isupper(ch)){
	// 	cout << (char) tolower(ch) << endl;
	// } 
	// else{
	// 	cout << (char) toupper(ch) << endl;
	// }

	if(ch >= 'a' and ch <= 'z'){
		cout << (char) (ch - 'a' + 'A') << endl;
	}
	else{
		cout << (char) (ch - 'A' + 'a') << endl;
	}
	
	return 0;	
}